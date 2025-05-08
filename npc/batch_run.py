import itertools
import subprocess
from multiprocessing import Pool
import pandas as pd
import matplotlib.pyplot as plt

def run_simulation(args):
    size, assoc, block_size, policy = args
    cmd = [
        "python3", "cachesim.py",
        "--size", str(size),
        "--associativity", str(assoc),
        "--block_size", str(block_size),
        "--policy", policy
    ]
    print(f"Launching: {' '.join(cmd)}")
    subprocess.run(cmd)

def main():
    # Define the parameter range
    sizes = [128/1024]  # KB
    associativities = [2]  # ways
    block_sizes = [4, 8, 16]  # bytes
    policies = ['LRU', 'FIFO']

    # Generate all parameter combinations
    param_list = list(itertools.product(sizes, associativities, block_sizes, policies))

    # Run concurrently using multiprocessing
    with Pool(processes=8) as pool:  
        pool.map(run_simulation, param_list)

    df = pd.read_csv("results.csv", names=["size", "associativity", "block_size", "policy", "miss_rate"])

    # Plot
    plt.figure(figsize=(10,6))

    for policy in df['policy'].unique():
        subset = df[df['policy'] == policy]
        plt.plot(subset['block_size'], subset['miss_rate'], marker='o', label=f'Policy: {policy}')

    plt.title('Miss Rate vs block_size')
    plt.xlabel('block_size')
    plt.ylabel('Miss Rate')
    plt.legend()
    plt.grid(True)
    plt.savefig('miss_rate_vs_block_size.png')
    plt.show()

if __name__ == "__main__":
    main()
