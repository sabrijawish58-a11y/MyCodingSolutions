# 🔁 Reverse a Number

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a positive number, then prints the **reversed version** of that number.

### 🔍 Example
Input: `1234`  
Output: `4321`

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use `ReverseNumbers()` to:
  - Extract digits using `Number % 10`
  - Remove the last digit using `Number / 10`
  - Build the reversed number using `Number2 = Number2 * 10 + Remainder`
- Print the result in `main()`.

## 🛠️ Concepts Used
- Modulus and integer division
- Digit manipulation and reconstruction
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input and reverse logic
