# 💼 Sales Commission Calculator

## 🧩 Problem Statement
Write a C++ program that asks the user to enter their total sales amount, then calculates and prints:
- The commission percentage based on the sales tier
- The total commission earned

## 💡 Commission Tiers
- ≥ 1,000,000 → 1%
- ≥ 500,000 → 2%
- ≥ 100,000 → 3%
- ≥ 50,000 → 5%
- Below 50,000 → 0%

## 💡 Solution Summary
- Use `ReadTotalSales()` to get the sales amount.
- Use `GetComissionPercentage()` to determine the applicable percentage.
- Use `CalculateTotalComission()` to compute the final commission.
- Print both percentage and total commission in `main()`.

## 🛠️ Concepts Used
- Conditional logic with `if-else`
- Business rule implementation
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, tiered logic, and output
