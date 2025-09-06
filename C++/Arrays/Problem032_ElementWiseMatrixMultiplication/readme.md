# ✖️ Element-wise Multiplication of Two Matrices

## 🧩 Problem Statement
Write a C++ program that:
1. Fills two 3×3 matrices with random numbers between `1` and `10`.
2. Multiplies them element by element.
3. Stores the result in a third matrix.
4. Prints all three matrices.

### 🔍 Example Output
Matrix 1 : 
03 07 01 
09 02 06 
04 08 10

Matrix 2 : 
05 02 03 
01 09 07 
06 04 02

Result : 
15 14 03 
09 18 42 
24 32 20

## 💡 Solution Summary
- Use `FillMatrixWithRandomNumbers()` to fill both matrices.
- Use `PrintMatrix()` to display them with formatting using `printf`.
- Use `MultiplyMatrix()` to:
  - Loop through each cell
  - Multiply corresponding elements: `Matrix1[i][j] * Matrix2[i][j]`
  - Store result in `MatrixResult[i][j]`
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- 2D array traversal
- Element-wise operations
- Formatted output using `printf` and width control
- Modular design using helper functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix generation, element-wise multiplication, and printing
