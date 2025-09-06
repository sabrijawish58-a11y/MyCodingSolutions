# 🔤 Print Vowels in a String

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Extracts and prints all vowel letters (a, e, i, o, u) found in the string.

### 🔍 Example Input
Input: "Mohammed Abu Hadhoud"

### 🔍 Example Output
Vowels in string are : o a e A u a o u

## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `IsVowel(char)` to:
  - Convert the character to lowercase
  - Check if it matches any of the vowels: `a, e, i, o, u`
- Use `PrintVowels(string)` to:
  - Traverse the string character by character
  - Print the character if `IsVowel()` returns true


## 🛠️ Concepts Used
- String traversal
- Character classification
- Case normalization
- Filtering and output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string reading and vowel extraction logic
