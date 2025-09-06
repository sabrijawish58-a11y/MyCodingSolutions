# 🔍 Prime Number Checker

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a positive number, then checks whether the number is prime or not.

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to ensure the input is greater than zero.
- Use `CheckPrime()` to determine if the number is prime:
  - Loop from 2 to `Number / 2`
  - If divisible by any number in that range, it's not prime
- Use `PrintNumberType()` to display the result using an `enum`:
  - `Prime` or `NotPrime`

## 🛠️ Concepts Used
- Prime number logic using modulus
- Input validation using `do-while`
- Classification using `enum`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, prime check, and output
