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
        pass

    @abstractmethod
    def evict(self):
        pass

    @abstractmethod
    def insert(self, index):
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
        for i, block in enumerate(self.blocks):
            if block == tag:
                self.policy.access(i)
                self.compulsory_miss = False
                return i
            if block is None:
                self.compulsory_miss = True
        return None

    def replace_block(self, tag):
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

def parse_memory_trace(log_filename, cache_filename="mtrace_cache.pkl"):
    """Parse memory trace with caching support"""
    # Try to load cached trace first
    if os.path.exists(cache_filename):
        try:
            with open(cache_filename, 'rb') as f:
                memory_trace = pickle.load(f)
                print(f"Loaded cached memory trace from {cache_filename}")
                return memory_trace
        except Exception as e:
            print(f"Error loading cached trace: {e}")
    
    print(f"Parsing memory trace file: {log_filename}")
    memory_trace = {'icache': [], 'dcache': []}
    
    try:
        with open(log_filename, 'r') as f:
            for line in f:
                if line.startswith('['):
                    continue
                    
                if line.startswith('R ') or line.startswith('W '):
                    parts = line.strip().split()
                    if len(parts) >= 3:
                        op_type = parts[0]
                        addr = int(parts[1], 16)
                        size = int(parts[2])
                        memory_trace['dcache'].append((op_type, addr, size))
        
        # Save parsed results to cache file
        try:
            with open(cache_filename, 'wb') as f:
                pickle.dump(memory_trace, f)
            print(f"Saved memory trace to cache file: {cache_filename}")
        except Exception as e:
            print(f"Error saving cache file: {e}")
            
    except Exception as e:
        print(f"Error parsing trace file: {e}")
        return None
    
    return memory_trace

def simulate_caches(trace, icache_config, dcache_config, policy_class=LRUReplacementPolicy):
    icache = Cache(*icache_config, policy_class)
    dcache = Cache(*dcache_config, policy_class)
    
    # Process data cache accesses
    for op_type, addr, size in trace['dcache']:
        dcache.access(addr)
        
    return {
        'dcache_misses': dcache.total_misses,
        'dcache_miss_rate': dcache.get_miss_rate(),
        'dcache_compulsory': dcache.compulsory_miss,
        'dcache_accesses': dcache.total_accesses
    }

def main():
    parser = argparse.ArgumentParser(description="Cache Simulator")
    parser.add_argument('--dcache_size', type=float, required=True, help='Data cache size in KB')
    parser.add_argument('--dcache_assoc', type=int, required=True, help='Data cache associativity')
    parser.add_argument('--dcache_block', type=int, required=True, help='Data cache block size')
    parser.add_argument('--policy', type=str, required=True, choices=['LRU', 'FIFO'], help='Replacement policy')
    parser.add_argument('--trace', type=str, required=True, help='Log file path')
    parser.add_argument('--cache_file', type=str, default="mtrace_cache.pkl", 
                       help='Cache file for parsed memory trace')
    args = parser.parse_args()

    # Parse trace file
    trace = parse_memory_trace(args.trace, args.cache_file)
    
    # Configure caches
    dcache_config = (args.dcache_size, args.dcache_assoc, args.dcache_block)
    policy_class = LRUReplacementPolicy if args.policy == 'LRU' else FIFOReplacementPolicy

    # Run simulation
    stats = simulate_caches(trace, dcache_config, dcache_config, policy_class)

    # Print results
    print(f"\nCache Configuration:")
    print(f"Data Cache:")
    print(f"  Size: {args.dcache_size}KB")
    print(f"  Associativity: {args.dcache_assoc}-way")
    print(f"  Block size: {args.dcache_block} bytes")
    print(f"  Replacement Policy: {args.policy}")

    print(f"\nSimulation Results:")
    print(f"Data Cache:")
    print(f"  Total accesses: {stats['dcache_accesses']}")
    print(f"  Total misses: {stats['dcache_misses']}")
    print(f"  Compulsory misses: {stats['dcache_compulsory']}")
    print(f"  Miss rate: {stats['dcache_miss_rate']:.2%}")

if __name__ == "__main__":
    main()