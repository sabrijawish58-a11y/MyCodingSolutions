# 🔁 Check Palindrome Number

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a positive number, then checks whether it is a **Palindrome Number**.

### 🔍 Definition
A **Palindrome Number** is a number that reads the same forward and backward.  
Examples:
- `121` → Palindrome  
- `1331` → Palindrome  
- `1234` → Not a Palindrome

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use `ReverseNumbers()` to reverse the digits of the number.
- Use `IsPalindrome()` to compare the original number with its reversed version.
- Print the result in `main()`.

## 🛠️ Concepts Used
- Modulus and integer division to extract digits
- Reconstructing reversed number
- Logical comparison
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, reversal, and palindrome check
