# 🧮 Store Row Sums in Separate Array

## 🧩 Problem Statement
Write a C++ program that:
1. Fills a 3×3 matrix with random numbers between `1` and `100`.
2. Prints the matrix in a formatted grid.
3. Calculates the sum of each row and stores it in a separate 1D array.
4. Prints the array of row sums.

### 🔍 Example Output
The following is a 3x3 random matrix: 
17 92 3 
45 76 29 
8 11 50

The following are the sum of each row in the matrix : 
Row 1 Sum = 112 
Row 2 Sum = 150 
Row 3 Sum = 69

## 💡 Solution Summary
- Use `FillMatrixWithRandomNumbers()` to fill the matrix.
- Use `PrintMatrix()` to display the matrix.
- Use `RowSum()` to calculate the sum of a specific row.
- Use `SumMatrixRowsInArray()` to store all row sums in `arrSum[]`.
- Use `PrintRowsSumArray()` to display the row sums.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- 2D array traversal and aggregation
- Storing derived values in a separate array
- Modular design using helper functions
- Formatted output using `iomanip`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix generation, row sum storage, and printing
