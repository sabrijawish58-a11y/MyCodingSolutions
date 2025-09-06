# 📅 Validate Date Input

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full date from the user.
2. Checks whether the date is valid:
   - Day is within correct range for the month
   - Month is between 1 and 12
   - February accounts for leap years
3. Prints whether the date is valid or not.

### 🔍 Example Input
Input:
Date: 31/4/2025

Output:
No, Date is a NOT validate date

## 💡 Solution Summary
- Use `ReadFullDate()` to get the date.
- Use `IsLeapYear()` to determine leap year status.
- Use `NumberOfDaysInAMonth()` to get the correct day limit.
- Use `IsValidDate()` to:
  - Check if day is between 1 and max for that month
  - Check if month is between 1 and 12
  - Special case for February
- Print the result accordingly.


## 🛠️ Concepts Used
- Leap year logic
- Month-day mapping
- Input validation
- Struct usage (sDate)
- Input/output formatting 

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date reading and one-day increment logic
