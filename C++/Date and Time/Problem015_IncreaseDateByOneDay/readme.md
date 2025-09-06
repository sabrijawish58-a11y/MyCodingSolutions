# 📅 Increase Date by One Day

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full date (day, month, year) from the user.
2. Increments the date by one day.
3. Handles transitions across months and years correctly.
4. Prints the new date.

### 🔍 Example Input
Day: 31 
Month: 12 
Year: 2023

### 🔍 Example Output
Date after adding one Day is : 1/1/2024

## 💡 Solution Summary
- Use `ReadFullDate()` to get the input date.
- Use `IsLastDayInMonth()` to check if the day is the last in its month.
- Use `IsLastMonthInYear()` to check if the month is December.
- Use `IncreaseDateByOneDay()` to:
  - If it's the last day of the last month → reset to 1/1 and increment year
  - If it's the last day of the month → reset day to 1 and increment month
  - Otherwise → increment day
- Print the new date.


## 🛠️ Concepts Used
- Leap year logic  
- Month-day mapping  
- Date arithmetic  
- Struct usage (`sDate`)  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date reading and one-day increment logic
