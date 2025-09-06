# 🎯 Print Middle Row and Column of a 2D Matrix

## 🧩 Problem Statement
Write a C++ program that:
1. Fills a 3×3 matrix with random numbers between `1` and `10`.
2. Prints the full matrix.
3. Prints the middle row.
4. Prints the middle column.

### 🔍 Example Output
Matrix 1 : 
03 07 01 
09 02 06 
04 08 10

Middle Row of Matrix 1 is : 09 02 06

Middle Col of Matrix 1 is : 07 02 08


## 💡 Solution Summary
- Use `FillMatrixWithRandomNumbers()` to fill the matrix.
- Use `PrintMatrix()` to display the matrix.
- Use `PrintMiddleRowOfMatrix()` to:
  - Access row at index `Rows / 2`
  - Print all its columns
- Use `PrintMiddleColOfMatrix()` to:
  - Access column at index `Cols / 2`
  - Print all its rows
- Use `printf(" %0*d  ", 2, value)` for consistent formatting.

## 🛠️ Concepts Used
- 2D array indexing
- Accessing specific row/column
- Formatted output using `printf`
- Modular design using helper functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix generation, middle row/column extraction, and printing
