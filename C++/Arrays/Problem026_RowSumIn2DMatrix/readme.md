# ➕ Row Sum in 2D Matrix

## 🧩 Problem Statement
Write a C++ program that:
1. Fills a 3×3 matrix with random numbers between `1` and `100`.
2. Prints the matrix in a formatted grid.
3. Calculates and prints the sum of each row individually.

### 🔍 Example Output
The following is a 3x3 random matrix: 
7 92 3 
45 76 29 
8 11 50
The following are the sum of each row in the matrix : 
Row 1 Sum = 112 
Row 2 Sum = 150 
Row 3 Sum = 69

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillMatrixWithRandomNumbers()` to fill the matrix.
- Use `PrintMatrix()` to display the matrix with spacing using `setw(3)`.
- Use `RowSum()` to calculate the sum of a specific row.
- Use `PrintEachRowSum()` to loop through all rows and print their sums.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- 2D array traversal with nested loops
- Row-wise aggregation
- Formatted output using `iomanip`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix generation, printing, and row sum analysis
