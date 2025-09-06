# ➕ Sum of Two Arrays

## 🧩 Problem Statement
Write a C++ program that:
1. Asks the user for the number of elements.
2. Fills two arrays with random numbers between `1` and `100`.
3. Creates a third array containing the sum of corresponding elements from the first two arrays.
4. Prints all three arrays.

### 🔍 Example
Input:
Enter number of elements: 5
Output:
Array 1 Elements : 17 92 3 45 76 
Array 2 Elements : 12 8 55 10 24 
Sum of array 1 and array 2 elements : 29 100 58 55 100

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillArrayWithRandomNumbers()` to fill both arrays.
- Use `SumOf2Arrays()` to compute element-wise sums.
- Use `PrintArray()` to display all arrays.
- Use `ReadPositiveNumber()` to validate input (must be added to the code).

## 🛠️ Concepts Used
- Random number generation using `rand()`
- Array traversal and arithmetic operations
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation, summation, and printing
