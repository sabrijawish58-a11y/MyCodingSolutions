# 🔁 Replace Word in String Using Built-in Function

## 🧩 Problem Statement
Write a C++ program that:
1. Initializes a string containing repeated words.
2. Replaces all occurrences of a specific word with another word.
3. Prints the original and modified strings.

### 🔍 Example:
Input:
Original String: 
Welcome to Jordan , Jordan is a nice country

Word to Replace: Jordan 
Replace With: USA
Output:
String After Replace: Welcome to USA , USA is a nice country

## 💡 Solution Summary
- Use `ReplaceWordInStringUsingBuiltInFunction()` to:
  - Find the position of the target word using `find()`
  - Replace it using `replace(pos, length, newWord)`
  - Repeat until no more matches are found
- Print both original and modified strings.

## 🛠️ Concepts Used
- String search and replace
- Looping with `find()`
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with word replacement logic and formatted output

