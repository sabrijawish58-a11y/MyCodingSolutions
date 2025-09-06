# 📅 Check Leap Year (Optimized Logic)

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a year from the user.
2. Checks whether the year is a leap year using a simplified logical expression.
3. Prints the result.

### 🔍 Example Input

Input: 2024


### 🔍 Example Output


## 💡 Solution Summary
- Use `ReadYear()` to read a year from the user.
- Use `IsLeapYear(short)` to apply leap year rules using:
  ```cpp
  return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
## 🛠️ Concepts Used
Logical expressions

Modulo operator

Input/output formatting


## 📦 Folder Contents
main.cpp: Contains the full solution with optimized leap year check