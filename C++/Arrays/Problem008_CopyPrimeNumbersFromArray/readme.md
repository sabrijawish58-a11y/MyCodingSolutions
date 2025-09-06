# 🔢 Copy Prime Numbers from Array

## 🧩 Problem Statement
Write a C++ program that:
1. Fills an array with random numbers between `1` and `100`.
2. Copies only the prime numbers into a second array.
3. Prints both arrays to verify the result.

### 🔍 Example
Input:
Enter number of elements: 10
Output:
Array 1 Elements : 17 92 3 45 76 29 8 11 50 7 
Prime Numbers in Array 2 : 17 3 29 11 7

## 💡 Solution Summary
- Use `RandomNumber(From, To)` to generate random values.
- Use `FillArrayWithRandomNumbers()` to fill the first array.
- Use `CheckPrime(Number)` to determine if a number is prime.
- Use `CopyOnlyPrimeNumbers()` to copy only prime numbers to a second array.
  - ⚠️ Important: Use `arr2Length = Counter;` instead of `--Counter` to avoid losing the last prime.
- Use `PrintArray()` to display both arrays.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- Prime number checking
- Array traversal and filtering
- Random number generation using `rand()`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array generation, prime filtering, and printing
