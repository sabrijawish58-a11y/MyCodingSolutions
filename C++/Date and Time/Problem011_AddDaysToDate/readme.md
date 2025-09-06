# 📅 Add Days to a Given Date

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full date (day, month, year) from the user.
2. Reads a number of days to add.
3. Calculates the new date after adding the given number of days.
4. Prints the resulting date.

### 🔍 Example Input
Date: 5/9/2025 
Days to Add: 40

### 🔍 Example Output
Date after adding [40] days is: 15/10/2025

## 💡 Solution Summary
- Use `ReadFullDate()` to get the initial date.
- Use `ReadDaysToAdd()` to get the number of days.
- Use `NumberOfDaysFromTheBeginningOfTheYear()` to calculate total days from Jan 1st.
- Use `DateAddDays()` to:
  - Add the days to the total
  - Loop through months, subtracting their day counts
  - Adjust year and month when overflow occurs
- Return and print the new date.


## 🛠️ Concepts Used
- Leap year logic
- Month-day mapping
- Date arithmetic
- Struct usage (`sDate`)
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date reading and day addition logic
