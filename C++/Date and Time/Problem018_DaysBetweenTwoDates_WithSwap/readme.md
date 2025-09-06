# 📅 Calculate Days Between Two Dates (With Swap Support)

## 🧩 Problem Statement
Write a C++ program that:
1. Reads two full dates from the user.
2. Calculates the number of days between them.
3. Supports both forward and reverse date inputs.
4. Optionally includes the end day in the count.
5. Prints both results.

### 🔍 Example:
Input:
Date1: 10/9/2025 
Date2: 5/9/2025

Output:
Difference is: -5 Day(s). 
Difference (Including End Day) is: -6 Day(s).


## 💡 Solution Summary
- Use `ReadFullDate()` twice to get both dates.
- Use `SwapDates()` if `Date1` is after `Date2`.
- Use `IncreaseDateByOneDay()` to increment the earlier date until reaching the later one.
- Count the number of increments.
- Multiply by `-1` if dates were swapped.
- Optionally include the end day.

## 🛠️ Concepts Used
- Leap year logic  
- Date comparison  
- Date increment  
- Struct usage (`sDate`)  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date reading, swap logic, and day-difference calculation
