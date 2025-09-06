# ➕ Sum Until Sentinel (-99)

## 🧩 Problem Statement
Write a C++ program that repeatedly asks the user to enter numbers and calculates their sum. The loop should stop when the user enters `-99`.

## 💡 Solution Summary
- Use `ReadNumber()` to prompt the user with a custom message including the counter.
- Use `SumNumbers()` to:
  - Loop using `do-while`
  - Accumulate the sum
  - Stop when `-99` is entered
- Print the final result in `main()`.

## 🛠️ Concepts Used
- Sentinel-controlled loop (`-99` as exit signal)
- Input accumulation using `Sum += Number`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input loop and summation
