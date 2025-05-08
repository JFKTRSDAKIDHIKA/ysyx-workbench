import re
import pickle
import os
import matplotlib.pyplot as plt
import numpy as np
from collections import defaultdict
from abc import ABC, abstractmethod
import argparse


class ReplacementPolicy(ABC):
    @abstractmethod
    def access(self, index):
        """Called when a block is accessed"""
        pass

    @abstractmethod
    def evict(self):
        """Return index of block to evict"""
        pass

    @abstractmethod
    def insert(self, index):
        """Called when a new block is inserted"""
        pass


class LRUReplacementPolicy:
    def __init__(self, associativity):
        self.access_order = []

    def access(self, block_idx):
        if block_idx in self.access_order:
            self.access_order.remove(block_idx)
        self.access_order.append(block_idx)

    def fill(self, block_idx):
        if block_idx in self.access_order:
            self.access_order.remove(block_idx)
        self.access_order.append(block_idx)

    def evict(self):
        if not self.access_order:
            raise RuntimeError("LRU eviction called on empty queue!")
        return self.access_order.pop(0)


class FIFOReplacementPolicy:
    def __init__(self, associativity):
        self.queue = []

    def access(self, block_idx):
        # FIFO doesn't need to do anything with access
        pass

    def fill(self, block_idx):
        if block_idx not in self.queue:
            self.queue.append(block_idx)

    def evict(self):
        if not self.queue:
            raise RuntimeError("FIFO eviction called on empty queue!")
        return self.queue.pop(0)


class CacheSet:
    def __init__(self, associativity, policy_class):
        self.blocks = [None] * associativity
        self.associativity = associativity
        self.policy = policy_class(associativity)
        self.compulsory_miss = False

    def find_block(self, tag):
        """Return block index if tag is found, otherwise return None"""
        for i, block in enumerate(self.blocks):
            if block == tag:
                self.policy.access(i)
                self.compulsory_miss = False
                return i
            if block is None:
                self.compulsory_miss = True
        return None

    def replace_block(self, tag):
        """Replace a block using the replacement policy"""
        for i in range(self.associativity):
            if self.blocks[i] is None:
                self.blocks[i] = tag
                self.policy.fill(i)
                return

        victim_idx = self.policy.evict()
        self.blocks[victim_idx] = tag
        self.policy.fill(victim_idx)


class Cache:
    def __init__(self, size_kb, associativity, block_size_bytes, policy_class=LRUReplacementPolicy):
        self.block_size = block_size_bytes
        self.associativity = associativity
        total_blocks = int(size_kb * 1024) // block_size_bytes
        self.num_sets = total_blocks // associativity

        self.offset_bits = (block_size_bytes - 1).bit_length()
        self.index_bits = (self.num_sets - 1).bit_length()

        self.sets = [CacheSet(associativity, policy_class) for _ in range(self.num_sets)]

        self.total_accesses = 0
        self.total_misses = 0
        self.compulsory_miss = 0

    def _extract_address_fields(self, address):
        offset = address & ((1 << self.offset_bits) - 1)
        index = (address >> self.offset_bits) & ((1 << self.index_bits) - 1)
        tag = address >> (self.offset_bits + self.index_bits)
        return tag, index, offset

    def access(self, address):
        self.total_accesses += 1
        tag, index, _ = self._extract_address_fields(address)
        cache_set = self.sets[index]

        hit = cache_set.find_block(tag) is not None
        if cache_set.compulsory_miss:
            self.compulsory_miss += 1

        if not hit:
            self.total_misses += 1
            cache_set.replace_block(tag)

        return hit

    def get_miss_rate(self):
        if self.total_accesses == 0:
            return 0.0
        return self.total_misses / self.total_accesses


def parse_nemu_log(log_filename, cache_filename):
    """Parse NEMU log file to extract PC values with caching"""
    if os.path.exists(cache_filename):
        try:
            with open(cache_filename, 'rb') as f:
                pc_trace = pickle.load(f)
            print(f"Loaded cached PC trace from {cache_filename}")
            return pc_trace
        except Exception as e:
            print(f"Error loading cached data: {e}")

    print(f"Parsing NEMU log file: {log_filename}")
    pc_trace = []
    pattern = re.compile(r'^(0x[0-9a-fA-F]+):')

    try:
        with open(log_filename, 'r') as f:
            for line in f:
                match = pattern.match(line)
                if match:
                    pc = int(match.group(1), 16)
                    pc_trace.append(pc)

        try:
            with open(cache_filename, 'wb') as f:
                pickle.dump(pc_trace, f)
            print(f"Saved PC trace to cache file: {cache_filename}")
        except Exception as e:
            print(f"Error saving cache file: {e}")

    except FileNotFoundError:
        print(f"Error: Could not find log file: {log_filename}")
        return None
    except Exception as e:
        print(f"Error parsing log file: {e}")
        return None

    return pc_trace


def simulate_cache(pc_trace, cache_config, policy_class=LRUReplacementPolicy):
    size_kb, associativity, block_size = cache_config
    cache = Cache(size_kb, associativity, block_size, policy_class)
    for pc in pc_trace:
        cache.access(pc)
    return cache.total_misses, cache.get_miss_rate(), cache.compulsory_miss


def main():
    parser = argparse.ArgumentParser(description="Cache Simulator")
    parser.add_argument('--size', type=float, required=True, help='Cache size in KB')
    parser.add_argument('--associativity', type=int, required=True, help='Cache associativity (ways)')
    parser.add_argument('--block_size', type=int, required=True, help='Cache block size in bytes')
    parser.add_argument('--policy', type=str, required=True, choices=['LRU', 'FIFO'], help='Replacement policy')
    parser.add_argument('--trace', type=str, default="../am-kernels/benchmarks/microbench/build/nemu-log.txt", help='Log file path')
    args = parser.parse_args()

    cache_config = (args.size, args.associativity, args.block_size)
    cache_file = "./pc_trace.cache"
    pc_trace = parse_nemu_log(args.trace, cache_file)
    if pc_trace is None:
        return

    print(f"Processing {len(pc_trace)} instructions")

    if args.policy == 'LRU':
        policy_class = LRUReplacementPolicy
    else:
        policy_class = FIFOReplacementPolicy

    misses, miss_rate, compulsory_miss = simulate_cache(pc_trace, cache_config, policy_class)

    with open(f"results.csv", "a") as f:
        f.write(f"{args.size},{args.associativity},{args.block_size},{args.policy},{miss_rate}\n")

    print(f"\nCache Configuration:")
    print(f"Size: {cache_config[0]}KB")
    print(f"Associativity: {cache_config[1]}-way")
    print(f"Block size: {cache_config[2]} bytes")
    print(f"Replacement Policy: {policy_class.__name__}")

    print(f"\nSimulation Results:")
    print(f"Total instructions: {len(pc_trace)}")
    print(f"Total misses: {misses}")
    print(f"Compulsory misses: {compulsory_miss}")
    print(f"Miss rate: {miss_rate:.2%}")


if __name__ == "__main__":
    main()
