# 🔁 Invert Character Case

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a single character from the user.
2. Inverts its case:
   - If it's uppercase, convert to lowercase.
   - If it's lowercase, convert to uppercase.
3. Prints the result.

### 🔍 Example Input/Output
Input: A Output: a

Input: g Output: G

## 💡 Solution Summary
- Use `ReadChar()` to read a character using `cin`.
- Use `InvertLetterCase()` to:
  - Check if the character is uppercase using `isupper()`
  - Convert to lowercase using `tolower()` or to uppercase using `toupper()`
- Print the result.

## ⚠️ Code Note
- التعليق داخل `InvertLetterCase` يحتوي على ملاحظات عربية داخل السطر البرمجي، يُفضل نقلها خارج الكود لتجنب تعارضات الترجمة أو التنسيق.
- يمكن توسيع هذا التمرين لاحقًا ليشمل سلسلة نصية كاملة بدلًا من حرف واحد.

## 🛠️ Concepts Used
- Character classification
- Case conversion
- Conditional logic
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with character reading and case inversion
