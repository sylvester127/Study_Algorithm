# C/C++ Algorithm Study

This repository is a personal collection of C and C++ implementations for various algorithms and data structures, primarily for the purpose of algorithm study and practice. It includes solutions to common algorithmic problems, practice exercises, and some benchmarking code.

## Project Structure

The project is organized into several directories under `src/`, each serving a specific purpose:

-   `src/2019_study/`: Code from a 2019 study period, likely containing solutions to specific problems.
-   `src/archive_2014_part1/` & `src/archive_2014_part2/`: Archived code from 2014.
-   `src/c_practice_problems/`: A collection of basic C practice problems.
-   `src/lecture_materials/`: Code related to lecture materials or specific topics.
-   `src/project1/`: A dedicated directory for a specific project (e.g., Sudoku solver).
-   `src/reference_algorithms/`: Contains reference implementations or examples of algorithms.
-   `src/`: Also contains top-level files like `benchmark.c`.

Resource files (e.g., `input.txt`, `output.txt`) are typically found in `res/` or within specific problem directories.

## How to Use

Each C/C++ file represents a solution to an algorithm problem or a practice exercise. Many problems use `input.txt` for input and `output.txt` for output.

To compile and run a specific file (e.g., `src/c_practice_problems/1.c`):

```bash
# For C files
gcc -o my_program src/c_practice_problems/1.c
./my_program

# For C++ files
g++ -o my_program src/project1/스도쿠.cpp
./my_program
```

Ensure any required `input.txt` files are in the correct location (often the same directory as the executable or `res/`).

## Contributing

This is a personal study repository. Feel free to explore the code.

## License

[Consider adding a license here if you plan to share this publicly, e.g., MIT License.]