# 🔀 Shuffle Array from 1 to N

## 🧩 Problem Statement
Write a C++ program that:
1. Asks the user for a positive number `N`.
2. Fills an array with numbers from `1` to `N`.
3. Shuffles the array randomly.
4. Prints the array before and after shuffling.

### 🔍 Example
Input:
Enter number of elements: 5
Output:
Array elements before shuffle: 
1 2 3 4 5 
Array elements after shuffle: 
3 1 5 2 4

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use `FillArrayWith1ToNum()` to fill the array sequentially.
  - ⚠️ Important: Use `i < arrLength` to avoid overflow.
- Use `ShuffleArray()` to randomly swap elements.
  - Note: This is a basic shuffle, not Fisher–Yates.
- Use `PrintArray()` to display contents before and after shuffle.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- Array initialization
- Random number generation using `rand()`
- Element swapping
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation, shuffling, and printing
