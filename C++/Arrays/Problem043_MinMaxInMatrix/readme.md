# 📈 Find Minimum and Maximum in 2D Matrix

## 🧩 Problem Statement
Write a C++ program that:
1. Initializes a 3×3 matrix with predefined values.
2. Prints the matrix.
3. Finds and prints the minimum and maximum values in the matrix.

### 🔍 Example Output
Matrix : 
77 5 12 
22 20 6 
14 3 9

Minimum Number is : 3 
Max Number is : 77

## 💡 Solution Summary
- Use `PrintMatrix()` to display the matrix.
- Use `MinNumberInMatrix()` to:
  - Traverse all elements
  - Track the smallest value
- Use `MaxNumberInMatrix()` to:
  - Traverse all elements
  - Track the largest value
- Print both results.

## 🛠️ Concepts Used
- 2D array traversal
- Min/Max tracking
- Formatted output using `iomanip`
- Modular design using helper functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix initialization, printing, and min/max analysis
