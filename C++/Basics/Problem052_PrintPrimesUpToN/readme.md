# 🔢 Print Prime Numbers from 1 to N

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a positive number, then prints all prime numbers from 1 to that number.

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use `CheckPrime()` to determine if a number is prime:
  - Loop from 2 to `Number / 2`
  - If divisible by any number in that range, it's not prime
- Use `PrintPrimeNumbersFrom1ToNumber()` to loop from 1 to `N` and print primes only.

## 🛠️ Concepts Used
- Prime number logic using modulus
- Input validation using `do-while`
- Classification using `enum`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, prime check, and output
