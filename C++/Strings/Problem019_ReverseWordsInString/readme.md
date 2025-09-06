# 🔄 Reverse Words in a String

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Splits the string into words using a space `" "` as delimiter.
3. Reverses the order of the words.
4. Prints the final reversed string.

### 🔍 Example:
Input:
"Welcome to C++ Programming"
Output:
String after reversing words: Programming C++ to Welcome

## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `SplitString(S11, " ")` to:
  - Extract words into a `vector<string>`
- Use `ReverseWordsInString(S11)` to:
  - Traverse the vector in reverse using an iterator
  - Concatenate words into a new string with spaces
  - Remove the trailing space using `substr()`
- Print the result.

## 🛠️ Concepts Used
- String splitting
- Vector traversal in reverse
- Concatenation and formatting
- Input/output handling

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string reading, word splitting, and reverse logic

