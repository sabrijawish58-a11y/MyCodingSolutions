# 📅 Check If Two Dates Are Equal

## 🧩 Problem Statement
Write a C++ program that:
1. Reads two full dates from the user.
2. Checks whether the two dates are exactly equal (same day, month, and year).
3. Prints the result.

### 🔍 Example Input
Date1: 5/9/2025 
Date2: 5/9/2025

### 🔍 Example Output


## 💡 Solution Summary
- Use `ReadFullDate()` twice to get both dates.
- Use `IsDate1EqualDate2()` to compare:
  - Year → then Month → then Day
- Print the result accordingly.

## 🛠️ Concepts Used
Struct comparison

Conditional logic

Input/output formatting
## 📦 Folder Contents
main.cpp: Contains the full solution with date reading and equality check