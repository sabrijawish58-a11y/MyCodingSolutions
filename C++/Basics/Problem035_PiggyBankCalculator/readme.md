# 🐷 Piggy Bank Total Calculator

## 🧩 Problem Statement
Write a C++ program that asks the user to enter the number of coins and dollars in a piggy bank, then calculates and prints:
- The total value in pennies
- The total value in dollars

## 💡 Coin Values
- Pennies = 1¢  
- Nickels = 5¢  
- Dimes = 10¢  
- Quarters = 25¢  
- Dollars = 100¢

## 💡 Solution Summary
- Use a `struct stPiggyBankContenet` to store coin counts.
- Use `ReadPiggyBankContenet()` to collect input from the user.
- Use `CalculateTotalPennies()` to compute the total value in pennies.
- Convert pennies to dollars by dividing by 100.
- Print both totals in `main()`.

## 🛠️ Concepts Used
- Structs for grouped data
- Arithmetic operations for conversion
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, struct usage, and calculations
