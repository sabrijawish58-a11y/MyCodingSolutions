# 🔁 Print Fibonacci Sequence Using Recursion

## 🧩 Problem Statement
Write a C++ program that:
1. Prints the first `N` numbers in the Fibonacci sequence using recursion.
2. Starts the sequence with `0` and `1`, and continues by summing the previous two numbers.

### 🔍 Example Output
Input: 10

Output: 1 1 2 3 5 8 13 21 34 55

## 💡 Solution Summary
- Use `PrintFibonacciUsingRecurssion(Number, Prev1, Prev2)` to:
  - Base case: stop when `Number == 0`
  - Recursive case:
    - Calculate `FebNumber = Prev1 + Prev2`
    - Print `FebNumber`
    - Call the function again with updated `Prev1` and `Prev2`
- Start with `Prev1 = 0`, `Prev2 = 1`

## ⚠️ Code Note
- أول رقم مطبوع هو `1` وليس `0`، لأن الطباعة تبدأ من أول ناتج جمع.
- إذا أردت تضمين `0` كبداية، يمكن تعديل `main()` لطباعة `0` و `1` يدويًا قبل الاستدعاء التكراري.

## 🛠️ Concepts Used
- Recursion
- Fibonacci logic
- Sequence generation
- Output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with recursive Fibonacci logic and output
