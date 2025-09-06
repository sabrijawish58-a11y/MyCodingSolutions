# 📊 Column Sum in 2D Matrix

## 🧩 Problem Statement
Write a C++ program that:
1. Fills a 3×3 matrix with random numbers between `1` and `100`.
2. Prints the matrix in a formatted grid.
3. Calculates and prints the sum of each column individually.

### 🔍 Example Output
The following is a 3x3 random matrix: 
17 92 3 
45 76 29 
8 11 50

The following are the sum of each Col in the matrix : 
Col 1 Sum = 70 
Col 2 Sum = 179
Col 3 Sum = 82

## 💡 Solution Summary
- Use `FillMatrixWithRandomNumbers()` to fill the matrix.
- Use `PrintMatrix()` to display the matrix.
- Use `ColSum()` to calculate the sum of a specific column.
- Use `PrintEachColSum()` to loop through all columns and print their sums.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- 2D array traversal by column
- Column-wise aggregation
- Formatted output using `iomanip`
- Modular design using helper functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix generation, column sum analysis, and printing
