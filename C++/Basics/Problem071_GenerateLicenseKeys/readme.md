# 🔑 Generate Random License Keys

## 🧩 Problem Statement
Write a C++ program that generates a specified number of random license keys.  
Each key consists of 4 groups of 4 capital letters, separated by dashes.

### 🔍 Example
Input: `2`  
Output:
Key [1] : XQTR-WLPA-ZMNB-KJHG 
Key [2] : BVCX-QWER-ASDF-PLMN

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to get the number of keys to generate.
- Use `RandomNumber(From, To)` to generate random ASCII values.
- Use `GetRandomCharacter(CharType)` to return a random character based on type.
- Use `GenerateWord(CharType, Length)` to build a group of characters.
- Use `GenerateKey()` to concatenate 4 groups of capital letters with `-`.
- Use `GenerateKeys(NumberOfKeys)` to print all keys.

## 🛠️ Concepts Used
- Random number generation using `rand()`
- ASCII character manipulation
- Enum-based character type classification
- String concatenation and formatting
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with key generation logic
