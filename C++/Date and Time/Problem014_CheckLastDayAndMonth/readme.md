# 📅 Check Last Day in Month and Last Month in Year

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full date (day, month, year) from the user.
2. Checks whether the day is the last day in its month.
3. Checks whether the month is the last month in the year.
4. Prints both results.

### 🔍 Example Input
Day: 31 
Month: 12 
Year: 2024

### 🔍 Example Output

## 💡 Solution Summary
- Use `ReadFullDate()` to get the date.
- Use `IsLastDayInMonth(sDate)` to compare the day with the total days in that month.
- Use `IsLastMonthInYear(short)` to check if the month is 12.
- Print results accordingly.


## 🛠️ Concepts Used
- Leap year logic  
- Month-day mapping  
- Date validation  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date reading and end-of-period checks
