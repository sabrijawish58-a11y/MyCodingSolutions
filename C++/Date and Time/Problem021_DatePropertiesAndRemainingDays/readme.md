# 📅 Date Properties and Remaining Days

## 🧩 Problem Statement
Write a C++ program that:
1. Gets the current system date.
2. Determines:
   - Day of the week
   - Whether it's the end of the week
   - Whether it's a weekend
   - Whether it's a business day
   - Days remaining until end of week, month, and year
3. Prints all results in a readable format.

### 🔍 Example Output:
Today is Fri , 5/9/2025

Is it End of Week ? No , it is Not End of Week .

Is it Weekend ? Yes , it is a Week end .

Is it Business Day ? No , it is Not Business Day .

Days Until end of Week : 1 Days. 
Days Until end of Month : 26 Days. 
Days Until end of Year : 118 Days.


## 💡 Solution Summary
- Use `GetSystemDate()` to retrieve the current date.
- Use `DayOfWeekOrder()` to determine the weekday index.
- Use:
  - `IsEndOfWeek()` → true if Saturday
  - `IsWeekend()` → true if Friday or Saturday
  - `IsBusinessDay()` → true if not weekend
  - `DaysUntilTheEndOfWeek()` → 6 - weekday index
  - `DaysUntilTheEndOfMonth()` → difference to last day of month
  - `DaysUntilTheEndOfYear()` → difference to 31/12

## 🛠️ Concepts Used
- Leap year logic  
- Day-of-week calculation  
- Date comparison  
- System time retrieval  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with system date analysis and remaining days logic
