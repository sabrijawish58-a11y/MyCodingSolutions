# 📅 Count Overlap Days Between Two Periods

## 🧩 Problem Statement
Write a C++ program that:
1. Reads two periods (each with a start and end date).
2. Checks whether the periods overlap.
3. If they do, calculates how many days are shared between them.
4. Prints the result.

### 🔍 Example:
Input:
Period 1: 1/9/2025 to 10/9/2025 
Period 2: 5/9/2025 to 15/9/2025

Output:
Overlap Days Count Is: 6


## 💡 Solution Summary
- Use `ReadPeriod()` to get both periods.
- Use `IsOverlapPeriods()` to check if there's any overlap.
- Use `CountOverlapDays()` to:
  - Loop through the shorter period day by day
  - Check if each day exists in the other period using `isDateInPeriod()`
  - Count the overlapping days
- Print the result.

## 🛠️ Concepts Used
- Leap year logic  
- Date comparison  
- Period logic  
- Date increment  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with period reading and overlap day counting
