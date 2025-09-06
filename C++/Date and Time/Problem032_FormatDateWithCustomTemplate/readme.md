# 🧾 Format Date Using Custom Template

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a date from the user in string format `dd/mm/yyyy`.
2. Converts it into a `sDate` struct.
3. Prints the date using multiple formatting templates:
   - `"dd/mm/yyyy"`
   - `"yyyy/dd/mm"`
   - `"mm/dd/yyyy"`
   - `"mm-dd-yyyy"`
   - `"dd-mm-yyyy"`
   - `"Day:dd, Month:mm, Year:yyyy"`

### 🔍 Example:
Input:
Please Enter Date dd/mm/yyyy? 05/09/2025

Output:
5/9/2025 
2025/5/9 
9/5/2025 
9-5-2025 
5-9-2025 
Day:5, Month:9, Year:2025


## 💡 Solution Summary
- Use `ReadStringDate()` to get the input string.
- Use `SplitString()` to split the string by `/`.
- Use `StringToDate()` to convert the string into a `sDate` struct.
- Use `FormateDate()` to:
  - Replace `"dd"`, `"mm"`, `"yyyy"` in the template string with actual values
  - Return the formatted string
- Print the result using different templates.

## 🛠️ Concepts Used
- String parsing  
- Template-based formatting  
- Struct manipulation  
- Input/output formatting  

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with date parsing and multi-format printing
