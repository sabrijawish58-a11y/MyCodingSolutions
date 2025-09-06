# 🔡 Lowercase First Letter of Each Word

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Converts the first letter of each word to lowercase.
3. Prints the formatted string.

### 🔍 Example Input
Input: "Welcome To The World Of Programming"

### 🔍 Example Output
String after Conversion : 
welcome to the world of programming

## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `LowerFirstLetterOfEachWord()` to:
  - Traverse the string character by character
  - Detect word boundaries using spaces
  - Lowercase the first letter of each word using `tolower()`
- Return and print the modified string.

## ⚠️ Code Note
- اسم الدالة واضح ودقيق، لكن المتغير `string S1 = " ";` في `ReadString()` يُفضل تغييره إلى `""` لتجنب إدخال فراغ غير مرغوب فيه.
- هذا التمرين يُكمل المشكلة السابقة رقم 48 التي كانت تعتمد على `toupper()`.

## 🛠️ Concepts Used
- String traversal
- Word boundary detection
- Character transformation
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string reading and lowercase formatting logic
