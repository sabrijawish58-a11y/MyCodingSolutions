# 🔍 Count Character in String (Case Sensitive and Insensitive)

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Reads a single character from the user.
3. Counts how many times that character appears in the string:
   - First with case sensitivity.
   - Then ignoring case sensitivity.
4. Prints both results and shows the inverted case of the character.

### 🔍 Example Input
Input String: "Mohammed Abu Hadhoud Programming Advices" Input Character: m

### 🔍 Example Output
Letter 'm' count = 4 
Letter 'm' or 'M' Count = 5

## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `ReadChar()` to read a single character using `cin`.
- Use `CountLetter(S6, Ch3, true)` to count with case sensitivity.
- Use `CountLetter(S6, Ch3, false)` to count ignoring case.
- Use `InvertLetterCase()` to display the alternate form of the character.

## ⚠️ Code Note
- في `CountLetter()`، شرط الحلقة `i <= S6.length()` يجب تغييره إلى `i < S6.length()` لتجنب الوصول إلى موقع خارج حدود السلسلة (`out of bounds`).
- المتغير `string S1 = " ";` يُفضل تغييره إلى `""` لتجنب إدخال فراغ غير مرغوب فيه.
- يمكن لاحقًا توسيع هذا التمرين ليشمل عد الحروف الساكنة أو الرموز الخاصة.

## 🛠️ Concepts Used
- String traversal
- Character comparison with and without case sensitivity
- Input/output formatting
- Logical abstraction using default parameters

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string and character reading, case-sensitive and insensitive counting
