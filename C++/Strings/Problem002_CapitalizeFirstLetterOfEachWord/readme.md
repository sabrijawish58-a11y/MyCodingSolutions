# 🔠 Capitalize First Letter of Each Word

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Converts the first letter of each word to uppercase.
3. Prints the formatted string.

### 🔍 Example Input
Input: "welcome to the world of programming"

### 🔍 Example Output
String after Conversion :
Welcome To The World Of Programming

## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `UpeerFirstLetterOfEachWord()` to:
  - Traverse the string character by character
  - Detect word boundaries using spaces
  - Capitalize the first letter of each word using `toupper()`
- Return and print the modified string.

## ⚠️ Code Note
- اسم الدالة يحتوي على خطأ مطبعي: `UpeerFirstLetterOfEachWord`  
  يُفضل تصحيحه إلى `UpperFirstLetterOfEachWord` ليتماشى مع المعنى.
- المتغير `string S1 = " ";` يُفضل تغييره إلى `""` لتجنب إدخال فراغ غير مرغوب فيه.

## 🛠️ Concepts Used
- String traversal
- Word boundary detection
- Character transformation
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string reading and capitalization logic
