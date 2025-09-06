# 📋 Copy Array Using AddArrayElement Function

## 🧩 Problem Statement
Write a C++ program that:
1. Fills an array with random numbers between `1` and `100`.
2. Copies the array into a second array using a helper function `AddArrayElement`.
3. Prints both arrays to verify the result.

### 🔍 Example
Input:
Enter number of elements: 5
Output:
Array 1 Elements : 17 92 3 45 76 
Array 2 Elements after copy : 17 92 3 45 76

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillArrayWithRandomNumbers()` to fill the first array.
- Use `AddArrayElement()` to insert elements into the second array and update its length.
- Use `CopyArrayUsingAddArrayElement()` to loop through the source array and copy each element.
- Use `PrintArray()` to display both arrays.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- Array traversal and copying
- Length tracking using reference
- Random number generation using `rand()`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation, copying, and printing
