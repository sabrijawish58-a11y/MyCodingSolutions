# 🧮 Custom Square Root vs C++ sqrt

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a floating-point number from the user.
2. Calculates its square root using a custom function `MySqrt` based on `pow(Number, 0.5)`.
3. Compares the result with the built-in `sqrt()` function from `<cmath>`.

### 🔍 Example
Input:
Please enter a number ? 25
Output:
My Sqrt Result : 5 
C++ Sqrt Result : 5

## 💡 Solution Summary
- Use `ReadNumber()` to read a float from the user.
- Use `MySqrt()` to calculate the square root using `pow(Number, 0.5)`.
- Use `sqrt()` from `<cmath>` to compare results.
- Print both results to verify correctness.

## 🛠️ Concepts Used
- Power function for root calculation
- Comparison between custom and standard math functions
- Floating-point input/output
- Input/Output using `cin` and `cout`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with custom square root logic and comparison
