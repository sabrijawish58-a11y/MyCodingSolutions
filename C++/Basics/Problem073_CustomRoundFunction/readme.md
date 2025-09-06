# 🔁 Custom Round Function vs C++ Round

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a floating-point number from the user.
2. Implements a custom rounding function `MyRound` that mimics standard rounding behavior.
3. Compares the result with the built-in `round()` function from `<cmath>`.

### 🔍 Example
Input:
Pleas enter a number ? -3.6
Output:
My round Result : -4 
C++ round Result : -4

## 💡 Solution Summary
- Use `ReadNumber()` to read a float from the user.
- Use `GetFractionPart()` to extract the decimal part of the number.
- Use `MyRound()` to:
  - Round up if `abs(FractionPart) >= 0.5`
  - Round down otherwise
  - Handle positive and negative numbers correctly
- Use `round()` from `<cmath>` to compare results.
- Print both results to verify correctness.

## 🛠️ Concepts Used
- Type casting and integer extraction
- Absolute value comparison
- Manual rounding logic
- Floating-point input/output
- Input/Output using `cin` and `cout`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with custom rounding logic and comparison
