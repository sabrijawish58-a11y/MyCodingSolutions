# 🧮 Compare Two Matrices Element by Element

## 🧩 Problem Statement
Write a C++ program that:
1. Fills two 3×3 matrices with random numbers between `1` and `10`.
2. Prints both matrices.
3. Compares them element by element.
4. Prints whether they are "Typical" (i.e., identical) or not.

### 🔍 Example Output
Matrix 1 : 
03 07 01 
09 02 06 
04 08 10

Matrix 2 : 
03 07 01 
09 02 06 
04 08 10

YES : both Matrices are Typical.
Or if any value differs:
NO : Matrices are NOT Typical.

## 💡 Solution Summary
- Use `FillMatrixWithRandomNumbers()` to fill both matrices.
- Use `PrintMatrix()` to display them with consistent formatting.
- Use `AreTypicalMatrices()` to:
  - Traverse both matrices
  - Compare each corresponding element
  - Return `false` if any mismatch is found
- Print result accordingly.

## 🛠️ Concepts Used
- 2D array traversal
- Element-wise comparison
- Formatted output using `printf`
- Modular design using helper functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix generation, printing, and element-wise comparison
