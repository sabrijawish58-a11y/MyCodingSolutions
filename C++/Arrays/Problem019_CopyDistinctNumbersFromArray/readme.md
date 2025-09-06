# 🔢 Copy Distinct Numbers from Array

## 🧩 Problem Statement
Write a C++ program that:
1. Fills an array with predefined values (some repeated).
2. Copies only the distinct (non-repeating) values into a second array.
3. Prints both arrays to verify the result.

### 🔍 Example
Input:
Array 1 Elements : 10 10 10 50 50 70 70 70 70 90
Output:
Array 1 distinct Elements : 10 50 70 90

## 💡 Solution Summary
- Use `FillArray()` to populate the source array with repeated values.
- Use `IsNumberInArray()` to check if a number already exists in the destination array.
- Use `AddArrayElement()` to insert unique values.
- Use `CopyDistinactNumbersToArray()` to:
  - Loop through source array
  - Copy only values not already in destination
- Use `PrintArray()` to display both arrays.


## 🛠️ Concepts Used
- Array traversal and filtering
- Duplicate detection
- Modular design with reusable functions
- Input/Output using `cout`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with distinct value extraction and printing
