# 🔍 Count Specific Number in 2D Matrix

## 🧩 Problem Statement
Write a C++ program that:
1. Initializes a 3×3 matrix with predefined values.
2. Prints the matrix.
3. Asks the user to enter a number.
4. Counts how many times that number appears in the matrix.
5. Prints the result.

### 🔍 Example Output
Matrix : 
9 1 12 
0 9 1 
0 9 9

Enter the number to count in matrix ? 9

Number 9 Count in matrix is 4


## 💡 Solution Summary
- Use `PrintMatrix()` to display the matrix.
- Use `CountNumberInMatrix()` to:
  - Traverse all rows and columns
  - Increment counter if `Matrix[i][j] == Number`
- Read user input using `cin`.
- Print result accordingly.

## 🛠️ Concepts Used
- 2D array traversal
- Conditional counting
- User input handling
- Formatted output using `iomanip`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix initialization, printing, and number counting
