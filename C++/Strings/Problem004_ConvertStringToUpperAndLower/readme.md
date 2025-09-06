# 🔠 Convert Full String to Uppercase and Lowercase

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Converts the entire string to uppercase.
3. Converts the entire string to lowercase.
4. Prints both results.

### 🔍 Example Input
Input: "Welcome to Programming"

### 🔍 Example Output
String after Upper : 
WELCOME TO PROGRAMMING

String after Lower : 
welcome to programming

## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `UpperAllString()` to:
  - Traverse the string character by character
  - Convert each character to uppercase using `toupper()`
- Use `LowerAllString()` to:
  - Traverse the string character by character
  - Convert each character to lowercase using `tolower()`
- Print both results.

## ⚠️ Code Note
- المتغير `string S1 = " ";` يُفضل تغييره إلى `""` لتجنب إدخال فراغ غير مرغوب فيه.
- يمكن تحسين الأداء باستخدام `transform()` من `<algorithm>`، لكن الحل الحالي مناسب للتعلم اليدوي.

## 🛠️ Concepts Used
- String traversal
- Character transformation
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string reading and case conversion logic
