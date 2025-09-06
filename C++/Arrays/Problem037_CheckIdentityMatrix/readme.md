# ✅ Check if Matrix is Identity

## 🧩 Problem Statement
Write a C++ program that:
1. Initializes a 3×3 matrix.
2. Prints the matrix.
3. Checks whether it is an identity matrix.
4. Prints the result.

### 🔍 Example Output
Matrix : 
1 0 0 
0 1 0 
0 0 1

YES : Matrix is Identity.
Or if not:
NO : Matrix is NOT Identity.

## 💡 Solution Summary
- Use `PrintMatrix()` to display the matrix.
- Use `IsIdentityMatrix()` to:
  - Check if `Matrix[i][j] == 1` when `i == j`
  - Check if `Matrix[i][j] == 0` when `i != j`
  - Return `false` if any condition fails
- Print result accordingly.

## 🛠️ Concepts Used
- 2D array traversal
- Diagonal element validation
- Conditional logic
- Formatted output using `iomanip`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix initialization, printing, and identity check
