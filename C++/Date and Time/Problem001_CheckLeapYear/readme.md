# 📅 Check if a Year is a Leap Year

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a year from the user.
2. Checks whether the year is a leap year.
3. Prints the result.

### 🔍 Example Input

Input: 2024


### 🔍 Example Output


## 💡 Solution Summary
- Use `ReadYear()` to read a year from the user.
- Use `IsLeapYear(short)` to apply the leap year rules:
  - Divisible by 400 → leap year
  - Divisible by 100 but not 400 → not leap year
  - Divisible by 4 but not 100 → leap year
  - Otherwise → not leap year
- Print the result accordingly.

## 🛠️ Concepts Used
- Conditional logic
- Modulo operator
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with year reading and leap year check
