# 🔠 Incremental Letter Pattern

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a positive number, then prints a letter pattern using uppercase English letters.  
Each line contains the same letter repeated, starting from `'A'` and increasing with each line.

### 🔍 Example
Input: `3`  
Output:
A 
BB 
CCC

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use ASCII values starting from `65` (`'A'`) up to `65 + Number - 1`.
- Use nested `for` loops in `PrintLetterPattern()`:
  - Outer loop: controls the letter
  - Inner loop: prints the letter multiple times based on its position
- Convert ASCII value to character using `char(i)`.

## 🛠️ Concepts Used
- ASCII character manipulation
- Nested loops (`for`)
- Pattern printing logic
- Input validation using `do-while`
- Input/Output using `cin` and `cout`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input and incremental letter pattern logic
