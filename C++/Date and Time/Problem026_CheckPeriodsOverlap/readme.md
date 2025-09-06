# 📅 Check If Two Periods Overlap

## 🧩 Problem Statement
Write a C++ program that:
1. Reads two periods (each with a start and end date).
2. Checks whether the two periods overlap.
3. Prints the result.

### 🔍 Example:
Input:
Period 1: 1/9/2025 to 10/9/2025 
Period 2: 5/9/2025 to 15/9/2025

Output:
Yes, Periods Overlap


## 💡 Solution Summary
- Use `ReadPeriod()` to read two periods.
- Use `CompareDates()` to compare start and end dates.
- Use `IsOverlapPeriods()` to:
  - Return false if:
    - Period2 ends before Period1 starts
    - OR Period2 starts after Period1 ends
  - Otherwise, return true
- Print the result accordingly.

## 🛠️ Concepts Used
- Struct comparison  
- Enum usage  
- Period logic  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with period reading and overlap detection
