# 📆 Month Time Units Calculator

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a year and a month from the user.
2. Determines if the year is a leap year.
3. Calculates:
   - Number of days in the month
   - Number of hours in the month
   - Number of minutes in the month
   - Number of seconds in the month
4. Prints all results.

### 🔍 Example Input

Year: 2024 
Month: 2

### 🔍 Example Output
Number of Days in Month [2] is 29 
Number of Hours in Month [2] is 696 
Number of Minutes in Month [2] is 41760 
Number of Seconds in Month [2] is 2505600

## 💡 Solution Summary
- Use `ReadYear()` and `ReadMonth()` to get inputs.
- Use `IsLeapYear()` to determine leap year status.
- Use:
  - `NumberOfDaysInAMonth()` → handles February with leap year logic
  - `NumberOfHoursInAMonth()` → days × 24
  - `NumberOfMinutesInAMonth()` → hours × 60
  - `NumberOfSecondsInAMonth()` → minutes × 60
- Print all results in a formatted way.


## 🛠️ Concepts Used
- Leap year logic
- Month-based time unit conversion
- Function chaining
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with month and year reading, and time unit calculations
