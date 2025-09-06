# 🔁 Check if Array is Palindrome

## 🧩 Problem Statement
Write a C++ program that:
1. Fills an array with predefined values.
2. Checks whether the array is a palindrome (i.e., reads the same forward and backward).
3. Prints the result.

### 🔍 Example
Input:
Array Elements : 10 20 30 30 20 10
Output:
Yes array is palindrome
Or if not:
No array is not palindrome

## 💡 Solution Summary
- Use `FillArray()` to populate the array with hardcoded values.
- Use `IsPalindromeArray()` to:
  - Compare each element `arr[i]` with its mirror `arr[Length - i - 1]`
  - Return `false` if any mismatch is found
- Use `PrintArray()` to display contents.
- Use `main()` to coordinate the logic and print the final result.

## 🛠️ Concepts Used
- Array traversal and indexing
- Palindrome checking using two-pointer logic
- Input/Output using `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with array initialization, palindrome check, and output
