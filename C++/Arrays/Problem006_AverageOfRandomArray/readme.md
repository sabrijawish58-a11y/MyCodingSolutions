# 📊 Average of Random Array Elements

## 🧩 Problem Statement
Write a C++ program that:
1. Asks the user for the number of elements.
2. Fills an array with random numbers between `1` and `100`.
3. Prints the array.
4. Calculates and prints the average of all elements.

### 🔍 Example
Input:
Enter number of elements: 5
Output:
Array Elements : 17 92 3 45 76 
Average of all Number is : 46.6

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillArrayWithRandomNumbers()` to fill the array.
- Use `PrintArray()` to display contents.
- Use `SumArray()` to calculate the total sum.
  - ⚠️ Important: Loop should start from `i = 0` to include all elements.
- Use `ArrayAverage()` to divide the sum by the array length.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- Random number generation using `rand()`
- Array traversal and accumulation
- Type casting for float division
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation, printing, and average calculation
