# 📅 Calculate Period Length in Days

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a period (start and end date).
2. Calculates the number of days between the two dates.
3. Optionally includes the end date in the count.
4. Prints both results.

### 🔍 Example:
Input:
Start Date: 1/9/2025 
End Date: 5/9/2025

Output:
Period Length is: 4 
Period Length (Including End Date) is: 5

## 💡 Solution Summary
- Use `ReadPeriod()` to get the start and end dates.
- Use `GetDifferenceInDays()` to:
  - Swap dates if needed
  - Increment day by day until reaching the end
  - Count the number of days
  - Optionally include the end day
- Use `PeriodLengthInDays()` to wrap the logic and print both results.


## 🛠️ Concepts Used
- Leap year logic
- Date comparison
- Date increment
- Struct usage (sDate, stPeriod)
- Input/output formatting 

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with period reading and length calculation