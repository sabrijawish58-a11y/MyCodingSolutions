# 📅 Date Increment by Time Units

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full date from the user.
2. Increments the date by various time units:
   - Day(s)
   - Week(s)
   - Month(s)
   - Year(s)
   - Decade(s)
   - Century
   - Millennium
3. Prints the resulting date after each increment.

### 🔍 Example:
Input:
Date: 5/9/2025

Output:
01-Adding one day is: 6/9/2025 
02-Adding 10 days is: 16/9/2025 
... 
14-Adding One Millennium is: 6/9/3025


## 💡 Solution Summary
- Use `ReadFullDate()` to get the initial date.
- Use modular functions like:
  - `IncreaseDateByOneDay()`
  - `IncreaseDateByXDays()`
  - `IncreaseDateByOneWeek()`
  - `IncreaseDateByXWeeks()`
  - `IncreaseDateByOneMonth()`
  - `IncreaseDateByXMonths()`
  - `IncreaseDateByOneYear()`
  - `IncreaseDateByXYears()` and `XYearsFaster()`
  - `IncreaseDateByOneDecade()` and `XDecadesFaster()`
  - `IncreaseDateByOneCentury()`
  - `IncreaseDateByOneMillennium()`
- Each function handles overflow across months and years.
- Leap years are accounted for in February.

## 🛠️ Concepts Used
- Leap year logic  
- Month-day mapping  
- Date arithmetic  
- Struct usage (`sDate`)  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date reading and multi-unit increment logic
