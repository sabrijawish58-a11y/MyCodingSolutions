# 🧮 Check if Matrix is Sparse

## 🧩 Problem Statement
Write a C++ program that:
1. Initializes a 3×3 matrix with predefined values.
2. Prints the matrix.
3. Checks whether it is a sparse matrix (i.e., number of zeros ≥ half of total elements).
4. Prints the result.

### 🔍 Example Output
Matrix : 
0 0 12
0 0 1
0 0 9

YES : it is Sparse.

Or if not:
NO : it's NOT Sparse.

## 💡 Solution Summary
- Use `PrintMatrix()` to display the matrix.
- Use `CountNumberInMatrix()` to count how many times `0` appears.
- Use `IsSparseMatrix()` to:
  - Calculate total size: `Rows * Cols`
  - Check if zero count ≥ half of total
- Print result accordingly.

## 🛠️ Concepts Used
- 2D array traversal
- Conditional counting
- Matrix classification
- Formatted output using `iomanip`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix initialization, printing, and sparse check
