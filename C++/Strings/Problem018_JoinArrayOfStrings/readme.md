# 🔗 Join Vector of Strings with Delimiter

## 🧩 Problem Statement
Write a C++ program that:
1. Initializes a `vector<string>` with multiple names.
2. Joins all elements into a single string using a custom delimiter.
3. Prints the final joined string.

### 🔍 Example Output
Vector after join: Mohammed###Faid###Ali###Maher

## 💡 Solution Summary
- Use `JoinString(vector<string>, string)` to:
  - Traverse the vector
  - Append each string followed by the delimiter
  - Remove the trailing delimiter using `substr()`
- Print the result.
## 🛠️ Concepts Used
Vector traversal

String concatenation

Delimiter handling

Input/output formatting

## 📦 Folder Contents
`main.cpp: Contains the full solution with vector joining logic and formatted output