# 🔄 Convert Date Between String and Struct

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a date from the user as a string in the format `dd/mm/yyyy`.
2. Converts the string into a `sDate` struct.
3. Displays the individual day, month, and year.
4. Converts the struct back into a string and prints it.

### 🔍 Example:
Input:
Please Enter Date dd/mm/yyyy? 05/09/2025

Output:
Day: 5 
Month: 9 
Year: 2025 
You Entered: 5/9/2025


## 💡 Solution Summary
- Use `ReadStringDate()` to get the input string.
- Use `SplitString()` to split the string by `/`.
- Use `StringToDate()` to convert the string into a `sDate` struct.
- Use `DateToString()` to convert the struct back into a string.
- Print all components and the final formatted string.


## 🛠️ Concepts Used
- String parsing  
- Struct manipulation  
- Input/output formatting  
- Conversion logic  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string-to-date and date-to-string conversion
