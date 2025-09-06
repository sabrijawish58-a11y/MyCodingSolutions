# 🔤 Count Vowels in a String

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Counts how many vowel letters (a, e, i, o, u) appear in the string.
3. Prints the result.

### 🔍 Example Input
Input: "Mohammed Abu Hadhoud"
### 🔍 Example Output
Number of vowels is: 7

## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `IsVowel(char)` to:
  - Convert the character to lowercase
  - Check if it matches any of the vowels: `a, e, i, o, u`
- Use `CountVowels(string)` to:
  - Traverse the string character by character
  - Increment counter if `IsVowel(S7[i])` returns true
- Print the result.

## ⚠️ Code Note
- في `ReadString()`، يُفضل تغيير `string S1 = " ";` إلى `""` لتجنب إدخال فراغ غير مرغوب فيه.
- يمكن لاحقًا توسيع هذا التمرين ليشمل عد الحروف الساكنة (Consonants) أو تحليل توزيع الحروف.

## 🛠️ Concepts Used
- String traversal
- Character classification
- Case normalization
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string reading and vowel counting logic
