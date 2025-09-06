# 🔁 Copy Array in Reverse Order

## 🧩 Problem Statement
Write a C++ program that:
1. Asks the user for the number of elements.
2. Fills an array with random numbers between `1` and `100`.
3. Copies the array into a second array in reverse order.
4. Prints both arrays to verify the result.

### 🔍 Example
Input:
Enter number of elements: 5
Output:
Array 1 Elements : 17 92 3 45 76 
Array 2 Elements after copy : 76 45 3 92 17

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillArrayWithRandomNumbers()` to fill the first array.
- Use `CopyArrayInReverseOrder()` to copy elements from the end of the source array to the beginning of the destination array.
- Use `PrintArray()` to display both arrays.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- Array traversal and indexing
- Reverse copying logic
- Random number generation using `rand()`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation, reverse copying, and printing
