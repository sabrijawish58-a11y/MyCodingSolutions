# 🔎 Check Number Existence in Array

## 🧩 Problem Statement
Write a C++ program that:
1. Fills an array with random numbers between `1` and `100`.
2. Asks the user to enter a number to search for.
3. Checks whether the number exists in the array.
4. Prints a message indicating whether the number was found or not.

### 🔍 Example
Input:
Enter number of elements: 6 
Array: 17 92 3 45 76 12 
Search for: 45
Output:
Yes , it is found :-)
Or if not found:
No , The number is not found :-(

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillArrayWithRandomNumbers()` to fill the array.
- Use `ReadNumber()` to get the number to search for.
- Use `IsNumberInArray()` to check existence:
  - Internally calls `FindNumberPositionInArray()`
  - Returns `true` if found, `false` otherwise
- Use `PrintArray()` to display contents.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- Linear search in arrays
- Boolean logic for existence check
- Random number generation using `rand()`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation, search logic, and output
