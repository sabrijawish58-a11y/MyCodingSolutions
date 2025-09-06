# ⬇️ Custom Floor Function vs C++ Floor

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a floating-point number from the user.
2. Implements a custom floor function `MyFloor` that mimics standard floor behavior.
3. Compares the result with the built-in `floor()` function from `<cmath>`.

### 🔍 Example
Input:
Pleas enter a number ? -3.2
Output:
My floor Result : -4 
C++ floor Result : -4

## 💡 Solution Summary
- Use `ReadNumber()` to read a float from the user.
- Use `MyFloor()` to:
  - Return `int(Number)` if the number is positive
  - Return `int(Number) - 1` if the number is negative (to handle truncation bias)
- Use `floor()` from `<cmath>` to compare results.
- Print both results to verify correctness.

## 🛠️ Concepts Used
- Type casting and integer truncation
- Manual floor logic
- Floating-point input/output
- Input/Output using `cin` and `cout`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with custom floor logic and comparison
