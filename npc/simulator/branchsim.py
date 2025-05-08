import re
import os
import pickle
import mmap
from typing import List, Tuple, Iterator
from dataclasses import dataclass
from tqdm import tqdm

CACHE_DIR = "./control_flow_cache"
CHUNK_SIZE = 1_000_000  # Number of instructions per chunk

@dataclass
class ControlFlowInfo:
    __slots__ = ['pc', 'type', 'instruction', 'taken', 'target']
    pc: int
    type: str
    instruction: str
    taken: bool
    target: int

class StaticPredictor:
    def __init__(self):
        self.total_predictions = 0
        self.correct_predictions = 0
        self.branch_predictions = 0
        self.jump_predictions = 0
        self.branch_correct = 0
        self.jump_correct = 0
        self.last_prediction = False
    
    def predict(self, pc: int, inst_type: str) -> bool:
        self.last_prediction = False
        return False
    
    def update(self, inst_type: str, actual_taken: bool):
        self.total_predictions += 1
        if inst_type == 'branch':
            self.branch_predictions += 1
            if self.last_prediction == actual_taken:
                self.correct_predictions += 1
                self.branch_correct += 1
        else:  # jump
            self.jump_predictions += 1
            if self.last_prediction == actual_taken:
                self.correct_predictions += 1
                self.jump_correct += 1

    def get_accuracy(self) -> dict:
        return {
            'overall': self.correct_predictions / self.total_predictions if self.total_predictions > 0 else 0,
            'branch': self.branch_correct / self.branch_predictions if self.branch_predictions > 0 else 0,
            'jump': self.jump_correct / self.jump_predictions if self.jump_predictions > 0 else 0
        }

def check_cache_valid(trace_file: str) -> bool:
    """Check if cache exists and is valid"""
    if not os.path.exists(CACHE_DIR):
        return False
    
    cache_info = os.path.join(CACHE_DIR, "cache_info.txt")
    if not os.path.exists(cache_info):
        return False
        
    with open(cache_info, 'r') as f:
        try:
            cache_time = float(f.read().strip())
            return cache_time >= os.path.getmtime(trace_file)
        except:
            return False

def create_cache(trace_file: str) -> None:
    """Create cache from trace file"""
    os.makedirs(CACHE_DIR, exist_ok=True)
    current_chunk = []
    chunk_count = 0
    total_instructions = 0
    
    # Compile regex patterns
    branch_pattern = re.compile(r'branch @ pc = (0x[0-9a-f]+) : (\w+).+=> (taken|not taken)')
    jump_pattern = re.compile(r'jump @ pc = (0x[0-9a-f]+) : (\w+) to (0x[0-9a-f]+)')
    
    print("Creating cache...")
    with open(trace_file, 'rb') as f:
        mm = mmap.mmap(f.fileno(), 0, access=mmap.ACCESS_READ)
        file_size = mm.size()
        
        with tqdm(total=file_size, unit='B', unit_scale=True) as pbar:
            while True:
                line = mm.readline()
                if not line:
                    break
                    
                line = line.decode('utf-8')
                pbar.update(len(line))
                
                # Process line
                inst = None
                if 'branch @' in line:
                    match = branch_pattern.search(line)
                    if match:
                        inst = ControlFlowInfo(
                            pc=int(match.group(1), 16),
                            type='branch',
                            instruction=match.group(2),
                            taken=match.group(3) == 'taken',
                            target=0
                        )
                elif 'jump @' in line:
                    match = jump_pattern.search(line)
                    if match:
                        inst = ControlFlowInfo(
                            pc=int(match.group(1), 16),
                            type='jump',
                            instruction=match.group(2),
                            taken=True,
                            target=int(match.group(3), 16)
                        )
                
                # Add instruction to current chunk
                if inst:
                    current_chunk.append(inst)
                    if len(current_chunk) >= CHUNK_SIZE:
                        chunk_file = os.path.join(CACHE_DIR, f"chunk_{chunk_count}.pkl")
                        with open(chunk_file, 'wb') as cf:
                            pickle.dump(current_chunk, cf)
                        total_instructions += len(current_chunk)
                        chunk_count += 1
                        current_chunk = []
        
        mm.close()
    
    # Save last chunk if any
    if current_chunk:
        chunk_file = os.path.join(CACHE_DIR, f"chunk_{chunk_count}.pkl")
        with open(chunk_file, 'wb') as cf:
            pickle.dump(current_chunk, cf)
        total_instructions += len(current_chunk)
    
    # Save cache metadata
    with open(os.path.join(CACHE_DIR, "cache_info.txt"), 'w') as f:
        f.write(str(os.path.getmtime(trace_file)))
    
    print(f"Cached {total_instructions:,} instructions in {chunk_count + 1} chunks")

def load_cached_instructions() -> Iterator[ControlFlowInfo]:
    """Load instructions from cache"""
    chunk_files = sorted(
        [f for f in os.listdir(CACHE_DIR) if f.endswith('.pkl')],
        key=lambda x: int(x.split('_')[1].split('.')[0])
    )
    
    for chunk_file in chunk_files:
        with open(os.path.join(CACHE_DIR, chunk_file), 'rb') as f:
            for inst in pickle.load(f):
                yield inst

def evaluate_predictor(trace_file: str) -> Tuple[dict, float, int]:
    """Evaluate predictor using cached data"""
    if not check_cache_valid(trace_file):
        create_cache(trace_file)
    
    predictor = StaticPredictor()
    total_instructions = 0
    
    print("Evaluating predictor...")
    for inst in tqdm(load_cached_instructions()):
        prediction = predictor.predict(inst.pc, inst.type)
        predictor.update(inst.type, inst.taken)
        total_instructions += 1
    
    accuracies = predictor.get_accuracy()
    total_cycles = total_instructions + (predictor.total_predictions - predictor.correct_predictions) * 3
    avg_cycles_per_inst = total_cycles / total_instructions
    
    return accuracies, avg_cycles_per_inst, total_instructions

def main():
    print("Control Flow Prediction Simulator")
    print("--------------------------------")
    
    trace_file = "/root/ysyx-workbench/am-kernels/benchmarks/microbench/build/nemu-log.txt"
    
    try:
        accuracies, avg_cycles, total_instructions = evaluate_predictor(trace_file)
        
        print(f"\nProcessed {total_instructions:,} instructions")
        print("\nStatic Predictor (Always Not Taken)")
        print(f"Overall prediction accuracy: {accuracies['overall']:.2%}")
        print(f"Branch prediction accuracy: {accuracies['branch']:.2%}")
        print(f"Jump prediction accuracy: {accuracies['jump']:.2%}")
        print(f"Average cycles per instruction: {avg_cycles:.2f}")
        print(f"Performance impact: {(avg_cycles-1):.2f} additional cycles per instruction")
    
    except FileNotFoundError:
        print(f"Error: {trace_file} not found")
        return

if __name__ == "__main__":
    main()