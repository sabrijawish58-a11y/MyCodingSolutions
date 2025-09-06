# 🔍 Check if Matrix is Scalar

## 🧩 Problem Statement
Write a C++ program that:
1. Initializes a 3×3 matrix.
2. Prints the matrix.
3. Checks whether it is a scalar matrix.
4. Prints the result.

### 🔍 Example Output
Matrix : 9 0 0 0 9 0 0 0 9

YES : Matrix is Scalar.

Or if not:
NO : Matrix is NOT Scalar.


## 💡 Solution Summary
- Use `PrintMatrix()` to display the matrix.
- Use `IsScalarMatrix()` to:
  - Store the first diagonal value `Matrix[0][0]`
  - Check if all diagonal elements equal that value
  - Ensure all non-diagonal elements are zero
- Print result accordingly.

## 🛠️ Concepts Used
- 2D array traversal
- Diagonal and non-diagonal validation
- Conditional logic
- Formatted output using `iomanip`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix initialization, printing, and scalar check
