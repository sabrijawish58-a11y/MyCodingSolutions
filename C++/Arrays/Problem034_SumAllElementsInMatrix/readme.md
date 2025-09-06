# ➕ Sum All Elements in a 2D Matrix

## 🧩 Problem Statement
Write a C++ program that:
1. Fills a 3×3 matrix with random numbers between `1` and `10`.
2. Prints the matrix in a formatted grid.
3. Calculates and prints the sum of all elements in the matrix.

### 🔍 Example Output
Matrix 1 : 
03 07 01 
09 02 06 
04 08 10

Sum of matrix 1 is : 50


## 💡 Solution Summary
- Use `FillMatrixWithRandomNumbers()` to fill the matrix.
- Use `PrintMatrix()` to display the matrix with consistent formatting.
- Use `SumOfMatrix()` to:
  - Traverse all rows and columns
  - Accumulate the sum of all elements
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- 2D array traversal
- Aggregation of all elements
- Formatted output using `printf`
- Modular design using helper functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix generation, printing, and total sum calculation
