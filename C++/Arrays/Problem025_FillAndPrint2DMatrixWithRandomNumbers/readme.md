# 🧮 Fill and Print 2D Matrix

## 🧩 Problem Statement
Write a C++ program that:
1. Fills a 3×3 matrix with random numbers between `1` and `100`.
2. Prints the matrix in a formatted grid using `setw`.

### 🔍 Example Output
The following is a 3x3 random matrix: 
17 92 3 
45 76 29 
8 11 50

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillMatrixWithRandomNumbers()` to fill the matrix.
- Use `PrintMatrix()` to display the matrix with spacing using `setw(3)`.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- 2D array declaration and traversal
- Nested loops for rows and columns
- Random number generation using `rand()`
- Formatted output using `iomanip`
- Input/Output using `cout`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix generation and printing

