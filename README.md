# 🍏 Golden Apple Corelet Microarchitecture

Welcome to the **Golden Apple Corelet** — a compact, in-order RISC-V microarchitecture built for embedded systems, where area, power, and simplicity take priority, but performance isn't completely sacrificed. This README documents the architectural goals, optimization progress, and performance evolution of the Corelet core.

---

## ✨ Overview

- **Architecture**: RV32E (Embedded RISC-V ISA)
- **Pipeline**: In-order, 2+5 stages (incrementally optimized)
- **Focus**: Tiny footprint, baseline correctness, optimization-ready
- **Use Cases**: IoT devices, MCU-class processors, FPGA soft cores

The **Corelet** is the seed of the broader **Golden Apple Microarchitecture** family — a future-ready lineage that includes both ultra-low-power and high-performance variants.

---

## 🚀 IPC Optimization Timeline

We believe in **measurable progress**. Here’s how IPC (Instructions Per Cycle) evolved over time as we optimized the microarchitecture:

```text
IPC
│
│                             ╭────────╮
│                      ╭────→│ 0.158   │ ← ⑦: I-Cache Pipelining
│               ╭────→│      ╰────────╯
│        ╭────→│ 0.099 ←──────⑥: Pipelining + Static Branch Prediction
│ ╭────→│ 0.053       ←──────⑤: Increased I-Cache Capacity
│ │0.009 → 0.007 → 0.036 → 0.048
│①      ②      ③      ④      ⑤      ⑥      ⑦
╰────────────────────────────────────────────→ Commit / Timeline

```

---

## 📚 Related Work

The Corelet is part of a family:

| Core Variant         | Description                                      |
|----------------------|--------------------------------------------------|
| Golden Apple Seed     | Smallest core (RV32E), perfect for MCUs          |
| Golden Apple Corelet  | Optimizable embedded core with pipeline tuning   |
| Golden Apple Titan    | High-performance OoO + multi-issue (WIP)         |
