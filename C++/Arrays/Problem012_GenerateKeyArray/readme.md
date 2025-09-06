# 🔑 Generate Array of License Keys

## 🧩 Problem Statement
Write a C++ program that:
1. Asks the user how many license keys to generate.
2. Generates each key in the format `XXXX-XXXX-XXXX-XXXX` using capital letters.
3. Stores the keys in an array.
4. Prints the array of keys.

### 🔍 Example
Input:
How many keys do you want to generate? 3
Output:
Array elements :
Array [0] : QWRT-ASDF-ZXCV-PLMN
Array [1] : HGFD-POIU-MNBV-LKJH 
Array [2] : TYUI-GHJK-BVCX-REWQ

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to get the number of keys.
- Use `GenerateWord(CharType, Length)` to generate a group of 4 capital letters.
- Use `GenerateKey()` to concatenate 4 groups with `-`.
- Use `FillArrayWithKeys()` to fill the array.
- Use `PrintStringArray()` to display the keys.
- Seed the random generator using `srand(time(NULL))` in `main()`.

## 🛠️ Concepts Used
- Random character generation using ASCII ranges
- Enum-based character type classification
- String concatenation and formatting
- Array of strings
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with key generation and printing
