# 📅 Compare Two Dates Using Enum

## 🧩 Problem Statement
Write a C++ program that:
1. Reads two full dates from the user.
2. Compares them using an enum `enDateCompare` with values:
   - `Before = -1`
   - `Equal = 0`
   - `After = 1`
3. Prints the comparison result.

### 🔍 Example:
Input:
Date1: 10/9/2025 
Date2: 5/9/2025

Output:
Compare Result = 1 


## 💡 Solution Summary
- Use `ReadFullDate()` twice to get both dates.
- Use `CompareDates()` to:
  - Return `Before` if Date1 < Date2
  - Return `Equal` if Date1 == Date2
  - Return `After` otherwise
- Print the enum result directly.

## 🛠️ Concepts Used
- Struct comparison
- Enum usage
- Conditional logic
- Input/output formatting 

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with enum-based date comparison
