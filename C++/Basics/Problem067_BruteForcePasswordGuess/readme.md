# 🔐 Brute-Force Password Guessing

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a 3-letter password (all uppercase), then tries to guess it by generating all possible combinations from `AAA` to `ZZZ`.

### 🔍 Example
Input: `AAF`  
Output:
Trial [1] : AAA 
Trial [2] : AAB 
... 
Trial [6] : AAF 
Password is : AAF Found after 6 Trial(s)

## 💡 Solution Summary
- Use `ReadPassword()` to get the original password from the user.
- Use three nested `for` loops to generate all combinations of 3 uppercase letters:
  - Outer loop: first letter from `'A'` to `'Z'` (`ASCII 65–90`)
  - Middle loop: second letter from `'A'` to `'Z'`
  - Inner loop: third letter from `'A'` to `'Z'`
- Compare each generated word with the original password.
- Print each trial and stop when the password is found.

## 🛠️ Concepts Used
- ASCII character manipulation
- Nested loops for combinatorial generation
- String comparison
- Input/Output using `cin` and `cout`
- Brute-force logic

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with password input and brute-force guessing logic
