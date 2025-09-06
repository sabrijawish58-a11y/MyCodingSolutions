# 🎲 Fill Array with Random Numbers

## 🧩 Problem Statement
Write a C++ program that:
1. Asks the user for the number of elements.
2. Fills an array with random numbers between `1` and `100`.
3. Prints the array contents.

### 🔍 Example
Input:
Enter number of elements: 5
Output:
Array Elements : 17 92 3 45 76

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate a random number in a given range.
- Use `FillArrayWithRandomNumbers()` to:
  - Read array length from user
  - Fill array with random values using `rand()`
- Use `PrintArray()` to display the array contents.
- Seed the random generator using `srand(time(NULL))` (recommended to add in `main()`).

## 🛠️ Concepts Used
- Random number generation using `rand()`
- Array manipulation
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation and printing
