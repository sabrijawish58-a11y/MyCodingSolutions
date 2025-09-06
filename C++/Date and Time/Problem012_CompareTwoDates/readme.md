# 📅 Compare Two Dates

## 🧩 Problem Statement
Write a C++ program that:
1. Reads two full dates from the user.
2. Compares them to determine if the first date is earlier than the second.
3. Prints the result.

### 🔍 Example Input
Date1: 5/9/2025 
Date2: 10/9/2025

### 🔍 Example Output

## 💡 Solution Summary
- Use `ReadFullDate()` twice to get both dates.
- Use `IsDate1BeforeDate2()` to compare:
  - First by year
  - Then by month (if years are equal)
  - Then by day (if months are equal)
- Print the result accordingly.


## 🛠️ Concepts Used
- Struct comparison
- Conditional logic
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date reading and comparison logic
