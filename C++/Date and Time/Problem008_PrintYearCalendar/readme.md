# 📅 Print Full Year Calendar

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a year from the user.
2. Prints a formatted calendar for all 12 months of that year.
3. Each month should:
   - Display its name
   - Start on the correct weekday
   - Show all days aligned under weekday columns

### 🔍 Example Input
Year: 2025

### 🔍 Example Output (Excerpt)

## 💡 Solution Summary
- Use `ReadYear()` to get input.
- Use `PrintYearCalendar()` to loop through all 12 months.
- Each month uses:
  - `PrintMonthCalendar()` to format and print
  - `DayOfWeekOrder()` to determine starting day
  - `NumberOfDaysInAMonth()` to get total days
  - `MonthShortName()` for header
- Output is aligned using `printf()` for consistent spacing.

## 🛠️ Concepts Used
Leap year logic

Day-of-week calculation

Month-day mapping

Formatted output using printf

Input/output handling
## 📦 Folder Contents
main.cpp: Contains the full solution with year calendar printing logic