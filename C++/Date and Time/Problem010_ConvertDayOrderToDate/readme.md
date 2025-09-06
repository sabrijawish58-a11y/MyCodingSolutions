# 📆 Convert Day Order to Date

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full date (day, month, year) from the user.
2. Calculates how many days have passed since the beginning of the year.
3. Converts that number back into a valid date (day/month/year).
4. Prints both the day order and the converted date.

### 🔍 Example Input
Day: 5 
Month: 9 
Year: 2025

### 🔍 Example Output
Number of Days from beginning of the Year Is : 248 Date for [248] is: 5/9/2025

## 💡 Solution Summary
- Use `ReadDay()`, `ReadMonth()`, and `ReadYear()` to get inputs.
- Use `NumberOfDaysFromTheBeginingOfTheYear()` to calculate the day order.
- Use `GetDateFromDayOrderInYear()` to:
  - Loop through months starting from January
  - Subtract each month's days from the remaining total
  - Stop when the remaining days fit within the current month
- Print both the day order and the reconstructed date.


## 🛠️ Concepts Used
- Leap year logic
- Month-day mapping
- Looping and subtraction
- Struct usage (`sDate`)
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date reading, day-order calculation, and reverse conversion
