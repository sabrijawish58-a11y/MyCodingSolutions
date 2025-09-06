# 🔁 Invert Case of All Letters in a String

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Inverts the case of each character:
   - Uppercase becomes lowercase.
   - Lowercase becomes uppercase.
3. Prints the modified string.

### 🔍 Example Input
Input: "Welcome To C++ Programming"

### 🔍 Example Output
String after Invert All String Letter Case :
 wELCOME tO c++ pROGRAMMING
 
## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `InvertLetterCase()` to:
  - Check if a character is uppercase using `isupper()`
  - Convert to lowercase using `tolower()` or to uppercase using `toupper()`
- Use `InvertAllStringLetterCase()` to:
  - Traverse the string character by character
  - Apply `InvertLetterCase()` to each character
- Print the result.

## ⚠️ Code Note
- التعليق داخل `InvertLetterCase` يحتوي على ملاحظات عربية داخل السطر البرمجي، يُفضل نقلها خارج الكود لتجنب تعارضات الترجمة أو التنسيق.
- المتغير `string S1 = " ";` يُفضل تغييره إلى `""` لتجنب إدخال فراغ غير مرغوب فيه.

## 🛠️ Concepts Used
- String traversal
- Character classification and transformation
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string reading and case inversion logic
