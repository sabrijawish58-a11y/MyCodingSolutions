# ➕ Count Positive Numbers in Array

## 🧩 Problem Statement
Write a C++ program that:
1. Fills an array with random numbers between `-100` and `100`.
2. Counts how many of those numbers are positive (i.e., `>= 0`).
3. Prints the array and the count of positive numbers.

### 🔍 Example
Input:
Enter number of elements: 6
Output:
Array Elements : -17 92 -3 45 -76 12 
Positive numbers count is : 3

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillArrayWithRandomNumbers()` to fill the array.
- Use `PositiveCount()` to:
  - Loop through the array
  - Check if each number is `>= 0`
  - Increment counter accordingly
- Use `PrintArray()` to display contents.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- Conditional counting
- Array traversal
- Random number generation using `rand()`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation, positive counting, and printing
