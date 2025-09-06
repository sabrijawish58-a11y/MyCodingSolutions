# 📅 Calculate Age in Days

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a date of birth from the user.
2. Gets the current system date.
3. Calculates the number of days between the two dates.
4. Optionally includes the end day in the count.
5. Prints the age in days.

### 🔍 Example:
Input:
Date of Birth: 5/9/2000 
System Date: 5/9/2025

Output:
Your Age is : 9132 Day(s).


## 💡 Solution Summary
- Use `ReadFullDate()` to get the birth date.
- Use `GetSystemDate()` to retrieve the current date from the system.
- Use `GetDifferenceInDays()` to:
  - Increment the birth date day by day until reaching the current date
  - Count the number of increments
  - Optionally include the end day
- Print the result.

## 🛠️ Concepts Used
- Leap year logic  
- Date comparison  
- Date increment  
- System time retrieval  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date reading and age calculation logic
