# ✅ Print Perfect Numbers from 1 to N

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a positive number, then prints all **Perfect Numbers** from 1 up to that number.

### 🔍 Definition
A **Perfect Number** is a number that is equal to the sum of its proper divisors (excluding itself).  
Example: `28 = 1 + 2 + 4 + 7 + 14`

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use `IsPerfectNumber()` to:
  - Loop from 1 to `Number - 1`
  - Sum all divisors using `Number % i == 0`
  - Compare the sum to the original number
- Use `PrintPerfectNumberFrom1ToNum()` to loop from 1 to `N` and print only perfect numbers.

## 🛠️ Concepts Used
- Number theory: divisor summation
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, perfect number check, and output
