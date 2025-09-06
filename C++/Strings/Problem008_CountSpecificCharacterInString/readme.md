# 🔍 Count Specific Character in a String

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Reads a single character from the user.
3. Counts how many times that character appears in the string.
4. Prints the result.

### 🔍 Example Input
Input String: "Programming is powerful" Input Character: r

### 🔍 Example Output
Letter 'r' count = 3

## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `ReadChar()` to read a single character using `cin`.
- Use `CountLetter(S6, Ch2)` to:
  - Traverse the string
  - Compare each character with the target
  - Increment counter if matched
- Print the result.

## ⚠️ Code Note
- في `CountLetter()`، شرط الحلقة `i <= S6.length()` يجب تغييره إلى `i < S6.length()` لتجنب الوصول إلى موقع خارج حدود السلسلة (`out of bounds`).
- المتغير `string S1 = " ";` يُفضل تغييره إلى `""` لتجنب إدخال فراغ غير مرغوب فيه.

## 🛠️ Concepts Used
- String traversal
- Character comparison
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string and character reading, and counting logic
