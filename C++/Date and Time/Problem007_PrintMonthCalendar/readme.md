# 📅 Print Month Calendar

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a year and a month from the user.
2. Calculates the day of the week the month starts on.
3. Prints a formatted calendar for that month.

### 🔍 Example Input
Year: 2025 
Month: 9

### 🔍 Example Output

## 💡 Solution Summary
- Use `ReadYear()` and `ReadMonth()` to get inputs.
- Use `DayOfWeekOrder()` to calculate the starting day index.
- Use `NumberOfDaysInAMonth()` to get the number of days.
- Use `MonthShortName()` to print the header.
- Loop through days and print them aligned under weekday columns.


## 🛠️ Concepts Used
- Day-of-week calculation
- Month-day mapping
- Formatted output using `printf`
- Input/output handling

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with calendar printing logic
