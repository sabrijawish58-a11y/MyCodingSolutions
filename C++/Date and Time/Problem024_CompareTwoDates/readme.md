# 📅 Compare Two Dates

## 🧩 Problem Statement
Write a C++ program that:
1. Reads two full dates from the user.
2. Compares them to determine if the first date is after the second.
3. Prints the result.

### 🔍 Example:
Input:
Date1: 10/9/2025 
Date2: 5/9/2025

Output:
Yes , Date1 is After Date2.


## 💡 Solution Summary
- Use `ReadFullDate()` twice to get both dates.
- Use:
  - `IsDate1BeforeDate2()` → compares year, then month, then day
  - `IsDate1EqualDate2()` → checks exact match
  - `IsDate1AfterDate2()` → true if not before and not equal
- Print the result accordingly.

## 🛠️ Concepts Used
Struct comparison
Conditional logic
Input/output formatting

## 📦 Folder Contents
main.cpp: Contains the full solution with date reading and comparison logic
