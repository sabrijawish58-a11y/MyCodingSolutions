# 🔢 Print Digits from Left to Right

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a positive number, then prints each digit **from left to right**, one per line.

### 🔍 Example
Input: `1234`  
Output:
1 
2 
3 
4

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use `ReverseNumbers()` to reverse the number.
- Use `PrintDigits()` to print digits of the reversed number (which now appear in original left-to-right order).
- This two-step approach avoids converting the number to a string.

## 🛠️ Concepts Used
- Modulus and integer division
- Digit reversal and extraction
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, reversal, and digit printing
