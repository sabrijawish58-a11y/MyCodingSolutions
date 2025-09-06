# 🔍 Search for a Number in 2D Matrix

## 🧩 Problem Statement
Write a C++ program that:
1. Initializes a 3×3 matrix with predefined values.
2. Prints the matrix.
3. Asks the user to enter a number.
4. Checks whether the number exists in the matrix.
5. Prints the result.

### 🔍 Example Output
Matrix :
77 5 12
22 20 1
1 0 9

Enter the number to look for in matrix ? 20

YES : it is there.

Or if not:
NO : it's NOT there.

## 💡 Solution Summary
- Use `PrintMatrix()` to display the matrix.
- Use `IsNumberInMatrix()` to:
  - Traverse all rows and columns
  - Return `true` if any element matches the input number
- Read user input using `cin`.
- Print result accordingly.

## 🛠️ Concepts Used
- 2D array traversal
- Conditional search
- User input handling
- Formatted output using `iomanip`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix initialization, printing, and search logic
