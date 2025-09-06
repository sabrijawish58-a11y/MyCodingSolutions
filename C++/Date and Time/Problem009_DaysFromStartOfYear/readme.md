# 📆 Days from Start of Year

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full date (day, month, year) from the user.
2. Calculates how many days have passed since the beginning of that year.
3. Prints the total number of days.

### 🔍 Example Input

Day: 5 
Month: 9 
Year: 2025

### 🔍 Example Output
Number of Days from beginning of the Year Is : 248

## 💡 Solution Summary
- Use `ReadDay()`, `ReadMonth()`, and `ReadYear()` to get inputs.
- Use `IsLeapYear()` to determine leap year status.
- Use `NumberOfDaysInAMonth()` to get the number of days in each month.
- Use `NumberOfDaysFromTheBeginingOfTheYear()` to:
  - Loop through months from 1 to (Month - 1)
  - Sum their days
  - Add the current day
- Print the result.


## 🛠️ Concepts Used
- Leap year logic
- Month-day mapping
- Looping and summation
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date reading and day-count logic
