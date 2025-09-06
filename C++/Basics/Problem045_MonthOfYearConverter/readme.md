# 📆 Month of Year Converter

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a number between 1 and 12, then prints the corresponding month name.

## 💡 Month Mapping
- 1 → January  
- 2 → February  
- 3 → March  
- 4 → April  
- 5 → May  
- 6 → June  
- 7 → July  
- 8 → August  
- 9 → September  
- 10 → October  
- 11 → November  
- 12 → December

## 💡 Solution Summary
- Use `ReadNumberInRange()` to ensure the input is between 1 and 12.
- Use `ReadMonthOfYears()` to cast the number to an `enum`.
- Use `GetMonthOfYears()` to map the enum to a string name.
- Print the result in `main()`.

## 🛠️ Concepts Used
- `enum` for month classification
- Input validation using `do-while`
- Switch-case mapping
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, enum usage, and month mapping
