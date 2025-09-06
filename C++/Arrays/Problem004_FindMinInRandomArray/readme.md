# 🔢 Find Minimum Number in Random Array

## 🧩 Problem Statement
Write a C++ program that:
1. Asks the user for the number of elements.
2. Fills an array with random numbers between `1` and `100`.
3. Prints the array.
4. Finds and prints the minimum number in the array.

### 🔍 Example
Input:
Enter number of elements: 5
Output:
Array Elements : 17 92 3 45 76 
Min Number is : 3

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillArrayWithRandomNumbers()` to fill the array.
- Use `PrintArray()` to display contents.
- Use `MinNumberInArray()` to find the smallest value.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- Random number generation using `rand()`
- Array traversal and comparison
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation, printing, and min value detection
