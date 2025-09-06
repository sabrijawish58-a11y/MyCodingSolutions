# 📅 Check If Date Is Within a Period

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a period (start and end date).
2. Reads a separate date.
3. Checks whether the date falls within the period (inclusive).
4. Prints the result.

### 🔍 Example:
Input:
Period: 1/9/2025 to 10/9/2025 
Date to check: 5/9/2025

Output:
Yes, Date is within period

## 💡 Solution Summary
- Use `ReadPeriod()` to get the period.
- Use `ReadFullDate()` to get the date to check.
- Use `CompareDates()` to:
  - Return `Before`, `Equal`, or `After`
- Use `isDateInPeriod()` to:
  - Return true if date is not before start and not after end
- Print the result accordingly.

## 🛠️ Concepts Used
- Struct comparison  
- Enum usage  
- Period logic  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date-in-period validation

