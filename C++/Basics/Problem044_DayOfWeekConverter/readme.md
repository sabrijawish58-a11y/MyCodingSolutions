# 📅 Day of Week Converter

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a number between 1 and 7, then prints the corresponding day of the week.

## 💡 Day Mapping
- 1 → Saturday  
- 2 → Sunday  
- 3 → Monday  
- 4 → Tuesday  
- 5 → Wednesday  
- 6 → Thursday  
- 7 → Friday

## 💡 Solution Summary
- Use `ReadNumberInRange()` to ensure the input is between 1 and 7.
- Use `ReadDayOfWeek()` to cast the number to an `enum`.
- Use `GetDayOfWeek()` to map the enum to a string name.
- Print the result in `main()`.

## 🛠️ Concepts Used
- `enum` for day classification
- Input validation using `do-while`
- Switch-case mapping
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, enum usage, and day mapping
