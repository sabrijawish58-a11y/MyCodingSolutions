# 🧹 Remove Punctuation from String

## 🧩 Problem Statement
Write a C++ program that:
1. Initializes a string containing punctuation marks.
2. Removes all punctuation characters using `ispunct()`.
3. Prints the original and cleaned string.

### 🔍 Example:
Input:
Original String: Welcome to Jordan , Jordan is a nice country ; it's amazing
Output:
Punctuations Removed: Welcome to Jordan Jordan is a nice country its amazing

## 💡 Solution Summary
- Use `RemovePunctuationsFromString()` to:
  - Traverse the string character by character
  - Check each character using `ispunct()`
  - Append only non-punctuation characters to the result
- Print both original and cleaned strings.

## 🛠️ Concepts Used
Character classification

String traversal

Data cleaning

Input/output formatting

## 📦 Folder Contents
main.cpp: Contains the full solution with punctuation removal logic and formatted output