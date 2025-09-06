# 📅 Get Day of Week from Date

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full date (day, month, year) from the user.
2. Calculates the day of the week using Zeller’s Congruence.
3. Prints:
   - The date
   - The day order (0 = Sunday, 1 = Monday, ...)
   - The short name of the day (e.g. "Mon")

### 🔍 Example Input
Day: 5 
Month: 9 
Year: 2025

### 🔍 Example Output

Date : 5/9/2025 
Day Order : 5 
Day Name : Fri

## 💡 Solution Summary
- Use `ReadYear()`, `ReadMonth()`, and `ReadDay()` to get inputs.
- Use `DayOfWeekOrder()` to calculate the day index using:
  ```cpp
  (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7
Use DayShortName() to map the index to a name.

Print all results in a formatted way.
## 🛠️ Concepts Used
Zeller’s Congruence

Date decomposition

Array mapping

Input/output formatting
## 📦 Folder Contents
main.cpp: Contains the full solution with date reading and day-of-week calculation