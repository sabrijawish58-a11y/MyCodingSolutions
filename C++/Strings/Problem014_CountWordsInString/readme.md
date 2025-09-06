# 🧮 Count Words in a String

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Counts how many words exist in the string (separated by spaces).
3. Prints the result.

### 🔍 Example:
Input: 
"Welcome to C++ Programming"
Output:
The number of words in your string is: 4

## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `CountWords(string)` to:
  - Loop while `find(" ")` returns a valid position
  - Extract each word using `substr(0, pos)`
  - Erase the processed part using `erase(0, pos + 1)`
  - Increment counter if the word is not empty
- After the loop, check if the remaining string is not empty and count it as the last word.

## 🛠️ Concepts Used
- String traversal
- Word splitting using delimiter
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string reading and word counting logic
