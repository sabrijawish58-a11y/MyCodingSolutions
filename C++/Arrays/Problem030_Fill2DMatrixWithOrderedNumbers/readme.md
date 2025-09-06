# 🔢 Fill 2D Matrix with Ordered Numbers

## 🧩 Problem Statement
Write a C++ program that:
1. Fills a 3×3 matrix with ordered numbers starting from `1` to `9`.
2. Prints the matrix in a formatted grid.

### 🔍 Example Output
The following is a 3x3 Ordered matrix: 
1 2 3 
4 5 6 
7 8 9

## 💡 Solution Summary
- Use `FillMatrixWithOrderedNumbers()` to:
  - Initialize a counter starting from `1`
  - Fill the matrix row by row with increasing values
- Use `PrintMatrix()` to display the matrix with spacing using `setw(3)`
- Seed the random generator using `srand(time(NULL))` in `main()` (though not needed here)

## 🛠️ Concepts Used
- 2D array traversal with nested loops
- Sequential value assignment
- Formatted output using `iomanip`
- Modular design using helper functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with ordered matrix generation and printing
