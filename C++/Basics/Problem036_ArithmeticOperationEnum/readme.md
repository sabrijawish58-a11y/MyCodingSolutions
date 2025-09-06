# ➕ Arithmetic Operation Using Enum

## 🧩 Problem Statement
Write a C++ program that asks the user to enter two numbers and an arithmetic operation (`+`, `-`, `*`, `/`), then calculates and prints the result.

## 💡 Solution Summary
- Use `ReadNumber()` to get two floating-point numbers.
- Use `ReadType()` to read the operation type as a character and cast it to an `enum`.
- Use `Calculate()` to perform the operation using a `switch` statement.
- Print the result in `main()`.

## 🛠️ Concepts Used
- `enum` for operation types
- Type casting from `char` to `