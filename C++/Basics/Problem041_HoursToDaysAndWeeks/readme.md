# ⏱️ Convert Hours to Days and Weeks

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a number of hours, then calculates and prints:
- The equivalent number of days
- The equivalent number of weeks

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to ensure the input is valid.
- Use `HoursToDays()` to convert hours to days:  
  `Days = Hours / 24`
- Use `DaysToWeeks()` or `HoursToWeeks()` to convert to weeks:  
  `Weeks = Days / 7` or `Weeks = Hours / 24 / 7`
- Use `PrintConvertHoursIntoDaysAndWeeks()` to display all results.

## 🛠️ Concepts Used
- Time conversion logic
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, conversion, and output
