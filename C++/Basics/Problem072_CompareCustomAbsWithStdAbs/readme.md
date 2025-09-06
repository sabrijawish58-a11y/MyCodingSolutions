# ➕ Compare Custom ABS with C++ ABS

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a floating-point number from the user.
2. Calculates its absolute value using a custom function `MyABS`.
3. Compares the result with the built-in `abs()` function from `<cmath>`.

### 🔍 Example
Input:
Pleas enter a number ? -12.5
Output:
My abs Result : 12.5 
C++ abs Result : 12.5

## 💡 Solution Summary
- Use `ReadNumber()` to read a float from the user.
- Use `MyABS()` to:
  - Return the number if it's positive
  - Multiply by `-1` if it's negative
- Use `abs()` from `<cmath>` to compare results.
- Print both results to verify correctness.

## 🛠️ Concepts Used
- Conditional logic
- Function implementation vs standard library
- Floating-point input/output
- Input/Output using `cin` and `cout`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with custom ABS logic and comparison
