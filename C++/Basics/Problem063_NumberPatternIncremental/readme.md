# 🔢 Incremental Number Pattern

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a positive number, then prints a number pattern where each line contains the same digit repeated, starting from 1 up to the input number.

### 🔍 Example
Input: `3`  
Output:
1 
22 
333

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use nested `for` loops in `PrintNumberPattern()`:
  - Outer loop: from `1` to `Number`
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
