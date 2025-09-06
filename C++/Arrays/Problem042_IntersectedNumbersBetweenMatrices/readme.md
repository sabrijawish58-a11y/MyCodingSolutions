# 🔗 Find Intersected Numbers Between Two Matrices

## 🧩 Problem Statement
Write a C++ program that:
1. Initializes two 3×3 matrices with predefined values.
2. Prints both matrices.
3. Finds and prints the numbers that exist in both matrices.

### 🔍 Example Output
Matrix : 
77 5 12 
22 20 1 
1 0 9

Matrix 3 :
5 80 90 
22 77 1 
10 8 33

Intersected Numbers are : 
77 5 22 1

## 💡 Solution Summary
- Use `PrintMatrix()` to display both matrices.
- Use `IsNumberInMatrix()` to:
  - Check if a number from `Matrix1` exists in `Matrix2`
- Use `PrintIntersectedNumbers()` to:
  - Traverse `Matrix1`
  - Print any number that exists in both matrices

## 🛠️ Concepts Used
- 2D array traversal
- Cross-matrix search
- Conditional printing
- Formatted output using `iomanip`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix initialization, printing, and intersection logic
