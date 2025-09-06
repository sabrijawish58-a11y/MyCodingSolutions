# 🔍 Search for a Number in Array

## 🧩 Problem Statement
Write a C++ program that:
1. Fills an array with random numbers between `1` and `100`.
2. Asks the user to enter a number to search for.
3. Searches for the number in the array.
4. Prints its position (index) and order if found, or a message if not found.

### 🔍 Example
Input:
Enter number of elements: 5 
Array: 17 92 3 45 76 
Search for: 45
Output:
The number found at position : 3 
The number found its order : 4

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillArrayWithRandomNumbers()` to fill the array.
- Use `ReadNumber()` to get the number to search for.
- Use `FindNumberPositionInArray()` to search for the number:
  - Returns index if found
  - Returns `-1` if not found
- Use `PrintArray()` to display contents.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- Linear search in arrays
- Random number generation using `rand()`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation, search logic, and output
