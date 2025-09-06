# 🧮 Calculate Business Days in Vacation Period

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a vacation start and end date.
2. Calculates how many business days (excluding weekends) fall within that range.
3. Prints the result along with weekday names for both dates.

### 🔍 Example:
Input:
Vacation Starts: 1/9/2025 
Vacation Ends: 10/9/2025

Output:
Vacation From : Mon , 1/9/2025 
Vacation End : Wed , 10/9/2025 
Actual Vacations Days is : 7


## 💡 Solution Summary
- Use `ReadFullDate()` twice to get start and end dates.
- Use `DayOfWeekOrder()` to determine weekday names.
- Use `IsWeekend()` to exclude Fridays and Saturdays.
- Use `CalculateVacationDays()` to:
  - Loop from start to end date
  - Count only business days
- Print the result.

## 🛠️ Concepts Used
- Leap year logic  
- Day-of-week calculation  
- Date comparison  
- Business day filtering  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with vacation period analysis
