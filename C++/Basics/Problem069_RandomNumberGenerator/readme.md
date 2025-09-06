# 🎲 Random Number Generator

## 🧩 Problem Statement
Write a C++ program that generates random numbers between two bounds (inclusive), and prints three random values between `1` and `10`.

## 💡 Solution Summary
- Use `srand(time(NULL))` to seed the random number generator.
- Use `rand() % (To - From + 1) + From` to generate a number between `From` and `To`.
- Call `RandomNumber(1, 10)` three times and print the results.

### 🔍 Example Output
7 
2 
9

## 🛠️ Concepts Used
- Random number generation using `rand()`
- Seeding with `srand()` and `time(NULL)`
- Modulus arithmetic for range control
- Input/Output using `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with random number generation logic
