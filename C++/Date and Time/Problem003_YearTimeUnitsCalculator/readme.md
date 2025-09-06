# ⏳ Year Time Units Calculator

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a year from the user.
2. Determines if the year is a leap year.
3. Calculates:
   - Number of days in the year
   - Number of hours in the year
   - Number of minutes in the year
   - Number of seconds in the year
4. Prints all results.

### 🔍 Example Input

Input: 2024

### 🔍 Example Output
Number of Days in Year [2024] is 366 
Number of Hours in Year [2024] is 8784 
Number of Minutes in Year [2024] is 527040 
Number of Seconds in Year [2024] is 31622400
## 💡 Solution Summary
- Use `ReadYear()` to read a year from the user.
- Use `IsLeapYear()` to check leap year status.
- Use:
  - `NumberOfDaysInAYear()` → returns 366 or 365
  - `NumberOfHoursInAYear()` → days × 24
  - `NumberOfMinutesInAYear()` → hours × 60
  - `NumberOfSecondsInAYear()` → minutes × 60
- Print all results in a formatted way



## 🛠️ Concepts Used
- Leap year logic
- Time unit conversion
- Function chaining
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with year reading and time unit calculations
