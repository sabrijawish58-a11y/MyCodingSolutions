# 📋 Copy Array Elements

## 🧩 Problem Statement
Write a C++ program that:
1. Asks the user for the number of elements.
2. Fills an array with random numbers between `1` and `100`.
3. Copies the contents of the first array into a second array.
4. Prints both arrays to verify the copy.

### 🔍 Example
Input:
Enter number of elements: 5
Output:
Array 1 Elements : 17 92 3 45 76 
Array 2 Elements after copy : 17 92 3 45 76

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillArrayWithRandomNumbers()` to fill the first array.
- Use `CopyArray()` to copy values from `arr` to `arr2`.
- Use `PrintArray()` to display both arrays.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- Random number generation using `rand()`
- Array traversal and element-wise copying
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation, copying, and printing
