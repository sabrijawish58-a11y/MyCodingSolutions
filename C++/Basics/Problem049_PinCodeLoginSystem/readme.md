# 🔐 PIN Code Login System

## 🧩 Problem Statement
Write a C++ program that simulates a simple login system:
- The user is prompted to enter a PIN code.
- If the PIN is incorrect, the screen color changes and a warning is shown.
- If the PIN is correct (`1234`), the screen turns green and the account balance is displayed.

## 💡 Solution Summary
- Use `ReadPinCode()` to get user input.
- Use `Login()` to:
  - Loop until the correct PIN is entered
  - Show error message and change screen color on failure (`system("color 4F")`)
  - Return `true` on success
- In `main()`, if login succeeds, change screen color to green (`system("color 2F")`) and show balance.

## 🛠️ Concepts Used
- Input validation using `do-while`
- String comparison
- System commands for visual feedback (`system("color")`)
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with login logic and visual feedback
