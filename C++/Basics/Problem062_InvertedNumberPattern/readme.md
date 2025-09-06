# 🔢 Inverted Number Pattern

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a positive number, then prints an inverted number pattern where each line contains the same digit repeated, starting from the input number down to 1.

### 🔍 Example
Input: `5`  
Output:
55555 
4444 
333 
22 
1

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use nested `for` loops in `PrintInvertedNumberPattern()`:
  - Outer loop: from `Number` down to `1`
  - Inner loop: print digit `i` exactly `i` times
- Print each line followed by a newline.

## 🛠️ Concepts Used
- Nested loops (`for`)
- Pattern printing logic
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input and pattern printing logic
