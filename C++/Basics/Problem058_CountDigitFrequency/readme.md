# 🔍 Count Digit Frequency

## 🧩 Problem Statement
Write a C++ program that asks the user to enter:
- A positive number
- A single digit to check  
Then calculates and prints how many times that digit appears in the number.

### 🔍 Example
Input:  
- Number: `1234321`  
- Digit to check: `3`  
Output: `Digit 3 Frequency is 2 Time(s).`

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate both inputs.
- Use `CountDigitFrequency()` to:
  - Extract digits using `Number % 10`
  - Compare each digit to `DigitToCheck`
  - Count matches using `FreqCount++`
- Print the result in `main()`.

## 🛠️ Concepts Used
- Modulus and integer division
- Digit comparison and counting
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input and digit frequency logic
