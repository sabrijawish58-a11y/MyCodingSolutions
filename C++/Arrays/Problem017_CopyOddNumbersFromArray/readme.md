# 🔢 Copy Odd Numbers from Array

## 🧩 Problem Statement
Write a C++ program that:
1. Fills an array with random numbers between `1` and `100`.
2. Copies only the odd numbers into a second array.
3. Prints both arrays to verify the result.

### 🔍 Example
Input:
Enter number of elements: 10
Output:
Array 1 Elements : 17 92 3 45 76 29 8 11 50 7 
Array 2 Elements after copy : 17 3 45 29 11 7

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillArrayWithRandomNumbers()` to fill the first array.
- Use `CopyOddNumbers()` to:
  - Check each element with `arrSource[i] % 2 != 0`
  - Use `AddArrayElement()` to insert odd numbers into the second array
- Use `PrintArray()` to display both arrays.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- Array traversal and filtering
- Modulo operation for odd number detection
- Length tracking using reference
- Random number generation using `rand()`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation, filtering, and printing
