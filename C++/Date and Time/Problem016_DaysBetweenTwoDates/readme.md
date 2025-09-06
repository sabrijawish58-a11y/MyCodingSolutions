# 📅 Calculate Days Between Two Dates

## 🧩 Problem Statement
Write a C++ program that:
1. Reads two full dates from the user.
2. Calculates the number of days between them.
3. Optionally includes the end day in the count.
4. Prints both results.

### 🔍 Example:
Input:
Date1: 5/9/2025 
Date2: 10/9/2025

Output:
Difference is: 5 Day(s). 
Difference (Including End Day) is: 6 Day(s).

## 💡 Solution Summary
- Use `ReadFullDate()` twice to get both dates.
- Use `IsDate1BeforeDate2()` to compare them.
- Use `IncreaseDateByOneDay()` to increment the first date until it reaches the second.
- Count the number of increments.
- If `IncludeEndDay` is true, add one extra day to the result.

## 🛠️ Concepts Used
- Leap year logic  
- Date comparison  
- Date increment  
- Looping and counting  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date reading and day-difference logic

