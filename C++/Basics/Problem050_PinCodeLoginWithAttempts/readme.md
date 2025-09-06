# 🔐 PIN Code Login with Limited Attempts

## 🧩 Problem Statement
Write a C++ program that simulates a secure login system:
- The user is prompted to enter a PIN code.
- The user has a maximum of 3 attempts.
- If the PIN is correct (`1234`), the screen turns green and the account balance is displayed.
- If the user fails all attempts, the card is blocked and a warning is shown.

## 💡 Solution Summary
- Use `ReadPinCode()` to get user input.
- Use `Login()` to:
  - Loop up to 3 times using a counter
  - Show error message and change screen color on failure (`system("color 4F")`)
  - Return `true` on success, `false` on failure
- In `main()`, handle both success and failure cases with appropriate messages and color changes.

## 🛠️ Concepts Used
- Input validation using `do-while`
- String comparison
- Attempt counter