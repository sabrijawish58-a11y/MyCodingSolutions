# 📅 Calculate Return Date After Vacation

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a vacation start date and number of vacation days.
2. Skips weekends (Friday and Saturday).
3. Calculates the first business day after the vacation ends.
4. Prints the return date and its weekday name.

### 🔍 Example:
Input:
Vacation Starts: 5/9/2025 (Friday) 
Vacation Days: 5

Output:
Return Date: Thu , 11/9/2025


## 💡 Solution Summary
- Use `ReadFullDate()` to get the vacation start date.
- Use `ReadVacationDays()` to get the number of vacation days.
- Use `CalculateVacationReturnDate()` to:
  - Skip initial weekends
  - Count only business days
  - Extend the loop if weekends are encountered during the vacation
  - Skip weekends after the vacation ends
- Use `DayOfWeekOrder()` and `DayShortName()` to print the weekday name.


## 🛠️ Concepts Used
- Leap year logic  
- Day-of-week calculation  
- Weekend filtering  
- Date increment  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with vacation return date calculation
