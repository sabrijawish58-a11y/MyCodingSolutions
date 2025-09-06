# ⬆️ Custom Ceil Function vs C++ Ceil

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a floating-point number from the user.
2. Implements a custom ceiling function `MyCeil` that mimics standard ceil behavior.
3. Compares the result with the built-in `ceil()` function from `<cmath>`.

### 🔍 Example
Input:
Pleas enter a number ? -3.2
Output:
My Ceiling Result : -3 
C++ Ceiling Result : -3

## 💡 Solution Summary
- Use `ReadNumber()` to read a float from the user.
- Use `GetFractionPart()` to extract the decimal part of the number.
- Use `MyCeil()` to:
  - Round up if there's a fractional part and the number is positive
  - Return integer part directly if the number is negative or has no fraction
- Use `ceil()` from `<cmath>` to compare results.
- Print both results to verify correctness.


## 🛠️ Concepts Used
- Type casting and integer truncation
- Manual ceiling logic
- Floating-point input/output
- Input/Output using `cin` and `cout`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with custom ceil logic and comparison
