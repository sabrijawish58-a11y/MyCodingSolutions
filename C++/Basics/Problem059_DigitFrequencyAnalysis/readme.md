# 🔍 Digit Frequency Analysis

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a positive number, then prints how many times each digit (0–9) appears in that number.

### 🔍 Example
Input: `120321`  
Output:
Digit 0 Frequency is 1 Time(s).
Digit 1 Frequency is 2 Time(s).
Digit 2 Frequency is 2 Time(s).
Digit 3 Frequency is 1 Time(s).

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use `CountDigitFrequency(Number, i)` to count how many times digit `i` appears.
- Loop from `0` to `9` in `PrintAllDigitsFrequency()` and print only digits with frequency > 0.

## 🛠️ Concepts Used
- Modulus and integer division
- Digit comparison and counting
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input and digit frequency analysis
