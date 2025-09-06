# 🧹 Trim Spaces from String (Left, Right, Both)

## 🧩 Problem Statement
Write a C++ program that:
1. Initializes a string with leading and trailing spaces.
2. Removes spaces from the left side (`TrimLeft`).
3. Removes spaces from the right side (`TrimRight`).
4. Removes spaces from both sides (`Trim`).
5. Prints all results.

### 🔍 Example:
Input:
 " Mohammed Abu-Hadhoud "
Output:
String = Mohammed Abu-Hadhoud 
Trim Left = Mohammed Abu-Hadhoud 
Trim Right = Mohammed Abu-Hadhoud 
Trim = Mohammed Abu-Hadhoud

## 💡 Solution Summary
- Use `TrimLeft()` to:
  - Traverse from the start
  - Return substring starting from first non-space character
- Use `TrimRight()` to:
  - Traverse from the end
  - Return substring ending at last non-space character
- Use `Trim()` to:
  - Apply `TrimRight()` then `TrimLeft()` for full cleanup

## 🛠️ Concepts Used
- String traversal
- Substring extraction
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with trimming logic and formatted output
