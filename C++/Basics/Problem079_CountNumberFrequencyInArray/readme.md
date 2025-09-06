# 🔢 Convert Number to English Words

## 🧩 Problem Statement
Write a C++ program that:
1. Reads an integer number from the user.
2. Converts the number into its English word representation.
3. Supports numbers from 0 up to billions.

### 🔍 Example Input

Input: 1234567


### 🔍 Example Output


## 💡 Solution Summary
- Use `ReadNumber()` to read an integer from the user.
- Use `NumberToText(int)` to:
  - Handle ranges: 0–19, 20–99, 100–999, 1000–999999, etc.
  - Recursively break down the number into parts (hundreds, thousands, millions, billions)
  - Return the concatenated English words

## 🛠️ Concepts Used
Recursion

Number decomposition

String concatenation

Input/output formatting



## 📦 Folder Contents
main.cpp: Contains the full solution with number reading and conversion logic