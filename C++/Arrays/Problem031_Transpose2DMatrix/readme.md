# 🔄 Transpose a 2D Matrix

## 🧩 Problem Statement
Write a C++ program that:
1. Fills a 3×3 matrix with ordered numbers from `1` to `9`.
2. Prints the original matrix.
3. Creates a new matrix that is the transpose of the original.
4. Prints the transposed matrix.

### 🔍 Example Output
The following is a 3x3 Ordered matrix: 
1 2 3 
4 5 6 
7 8 9

The following is the Transposed matrix: 
1 4 7 
2 5 8 
3 6 9

## 💡 Solution Summary
- Use `FillMatrixWithOrderedNumbers()` to fill the matrix sequentially.
- Use `PrintMatrix()` to display both matrices.
- Use `TransposeMatrix()` to:
  - Swap `arr[i][j]` with `arr[j][i]`
  - Store result in a new matrix `arrTransposed`
- Seed the random generator using `srand(time(NULL))` in `main()` (not required here but kept for consistency).

## 🛠️ Concepts Used
- 2D array traversal
- Matrix transposition logic
- Formatted output using `iomanip`
- Modular design using helper functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with ordered matrix generation, transposition, and printing
