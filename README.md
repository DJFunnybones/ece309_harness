# C Input Echo & Interactive Prompt

A simple, beginner-friendly C command-line application that demonstrates basic string manipulation, interactive input loops, and deterministic testing via Bash.

---

## Features

* **Interactive Loop:** Continuously prompts the user for text using safe memory handling (`fgets`).
* **Pattern Matching:** Detects the presence of `"hello"` anywhere in a sentence using standard library function `strstr()`.
* **Echo Response:** Automatically echoes back any input that doesn't match predefined rules.
* **Graceful Exit:** Gracefully terminates the loop when the user inputs `"exit"`.
* **Automated Testing:** Includes Bash testing scripts to verify program behavior deterministically.

---

## File Structure

* `main.c` — The primary C program source code with detailed, line-by-line inline comments.
* `test.sh` — Bash automation script for Linux/macOS to test output deterministically.
* `run_test.sh` — Lightweight Bash script to send piped inputs directly into the compiled executable.

---

## Getting Started

### Prerequisites

You need a C compiler installed on your machine:
* **Linux:** `gcc` (GNU Compiler Collection)
* **macOS:** Xcode Command Line Tools (`clang` / `gcc`)
* **Windows:** MinGW, Git Bash, or WSL

---

## Compilation & Usage

### 1. Build the Program
Compile `main.c` into an executable named `harness` (or `program`):

```bash
gcc main.c -o harness
