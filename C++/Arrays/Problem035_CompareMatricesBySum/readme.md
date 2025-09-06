# 🧮 Compare Two Matrices by Sum of Elements

## 🧩 Problem Statement
Write a C++ program that:
1. Fills two 3×3 matrices with random numbers between `1` and `10`.
2. Prints both matrices.
3. Compares them by checking if the sum of their elements is equal.
4. Prints whether they are "equal" or "not equal" based on the sum.

### 🔍 Example Output
Matrix 1 : 
03 07 01 
09 02 06 
04 08 10

Matrix 2 : 
5 02 03 
01 09 07 
06 04 03

No : Matrices are NOT equal


## 💡 Solution Summary
- Use `FillMatrixWithRandomNumbers()` to fill both matrices.
- Use `PrintMatrix()` to display them with consistent formatting.
- Use `SumOfMatrix()` to calculate the total sum of each matrix.
- Use `AreEqualMatrices()` to compare the sums and return a boolean.
- Print result accordingly.

## ⚠️ Note
- This comparison checks **only the total sum**, not element-by-element equality.
- Two matrices may have the same sum but different values.

## 🛠️ Concepts Used
- 2D array traversal
- Aggregation and comparison
- Formatted output using `printf`
- Modular design using helper functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix generation, printing, and sum-based comparison
