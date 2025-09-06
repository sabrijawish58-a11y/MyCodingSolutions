# 📅 Date Decrement by Time Units

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full date from the user.
2. Decreases the date by various time units:
   - Day(s)
   - Week(s)
   - Month(s)
   - Year(s)
   - Decade(s)
   - Century
   - Millennium
3. Prints the resulting date after each decrement.

### 🔍 Example:
Input:
Date: 5/9/2025

Output:
01-Subtracting one day is: 4/9/2025 
02-Subtracting 10 days is: 25/8/2025 
... 
14-Subtracting One Millennium is: 25/8/1025


## 💡 Solution Summary
- Use `ReadFullDate()` to get the initial date.
- Use modular functions like:
  - `DecreaseDateByOneDay()`
  - `DecreaseDateByXDays()`
  - `DecreaseDateByOneWeek()`
  - `DecreaseDateByXWeeks()`
  - `DecreaseDateByOneMonth()`
  - `DecreaseDateByXMonths()`
  - `DecreaseDateByOneYear()`
  - `DecreaseDateByXYears()` and `XYearsFaster()`
  - `DecreaseDateByOneDecade()` and `XDecadesFaster()`
  - `DecreaseDateByOneCentury()`
  - `DecreaseDateByOneMillennium()`
- Each function handles underflow across months and years.
- Leap years are accounted for in February.


## 🛠️ Concepts Used
- Leap year logic  
- Month-day mapping  
- Date arithmetic  
- Struct usage (`sDate`)  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date reading and multi-unit decrement logic
