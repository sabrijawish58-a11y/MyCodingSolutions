# 🔢 Sum of Digits

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a positive number, then calculates and prints the **sum of its digits**.

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use `PrintSumOfDigits()` to:
  - Extract digits using `Number % 10`
  - Remove the last digit using `Number / 10`
  - Accumulate the sum of digits
- Print the result in `main()`.

## 🛠️ Concepts Used
- Modulus and integer division
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input and digit summation logic
