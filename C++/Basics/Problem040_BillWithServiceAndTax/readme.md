# 🧾 Bill with Service Fee and Tax

## 🧩 Problem Statement
Write a C++ program that asks the user to enter the total bill amount, then calculates and prints the final bill after adding:
- 10% service fee
- 16% sales tax (applied after service fee)

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to ensure valid input.
- Use `TotalBillAfterServiceAndTax()` to apply:
  - `TotalBill *= 1.1` → adds 10% service fee
  - `TotalBill *= 1.16` → adds 16% tax on the new total
- Use `PrintTotalBillAfterServiceAndTax()` to display both original and final totals.

## 🛠️ Concepts Used
- Percentage increase via multiplication
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, calculation, and output
