# 🔢 Print Digits in Reverse Order

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a positive number, then prints each digit of the number **in reverse order**, one per line.

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use `PrintDigits()` to:
  - Extract digits using `Number % 10`
  - Remove the last digit using `Number / 10`
  - Print each digit on a new line
- The digits are printed from least significant to most significant (right to left).

## 🛠️ Concepts Used
- Modulus and integer division
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input and digit extraction logic
