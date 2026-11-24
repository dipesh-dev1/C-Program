# C Programs

A collection of C (and a little C++) programs written while studying programming and Operating System concepts, including **Banker's Algorithm** (deadlock avoidance) and the **FIFO** and **LRU** algorithms.

**Author:** Dipesh Chaudhary
**Program:** B.Tech in Information Technology, Lumbini Technological University

---

## Contents

| File | Description |
|------|-------------|
| `BankarsAlgorithm.c` | Banker's Algorithm: checks for a safe state and avoids deadlock |
| `fifo.c` | FIFO (First In, First Out) algorithm |
| `lru.c` | LRU (Least Recently Used) algorithm |
| `ajf.c` | Practice program |
| `demo.c`, `display.c`, `example.c` | Basic practice programs |
| `hello.c` | Hello World |
| `love.c` | Practice program |
| `New.cpp` | C++ practice program |
| `.vscode/` | VS Code build and debug configuration |
| `build/Debug/`, `output/` | Compiler output folders |

Compiled files (`.exe`, `.o`) are build output and can be regenerated from the source.

## Requirements

- A C compiler such as [GCC](https://gcc.gnu.org/) (MinGW on Windows)
- Optional: [VS Code](https://code.visualstudio.com/) with the C/C++ extension

Check that GCC is installed:

```bash
gcc --version
```

## How to Compile and Run

```bash
# 1. Clone the repository
git clone https://github.com/dipesh-dev1/C-Program.git
cd C-Program

# 2. Compile a program
gcc BankarsAlgorithm.c -o BankarsAlgorithm

# 3. Run it
./BankarsAlgorithm          # Linux / macOS
BankarsAlgorithm.exe        # Windows
```

For the C++ file, use `g++`:

```bash
g++ New.cpp -o New
```

## Topics Covered

- C basics: input/output, variables, loops, conditions
- Operating System algorithms: Banker's Algorithm (deadlock avoidance), FIFO and LRU
- Compiling and running programs with GCC

## Author

**Dipesh Chaudhary**
GitHub: [@dipesh-dev1](https://github.com/dipesh-dev1)

## License

These programs were written for learning purposes. You are free to use them as a reference.
