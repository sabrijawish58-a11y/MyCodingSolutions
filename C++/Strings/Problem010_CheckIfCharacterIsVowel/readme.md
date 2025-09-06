# 🔤 Check if Character is a Vowel

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a single character from the user.
2. Checks whether it is a vowel (a, e, i, o, u).
3. Prints the result.

### 🔍 Example Input/Output
Input: A Output: Yes Letter 'A' is Vowel

Input: b Output: No Letter 'b' is NOT Vowel

## 💡 Solution Summary
- Use `ReadChar()` to read a character using `cin`.
- Use `IsVowel()` to:
  - Convert the character to lowercase using `tolower()`
  - Check if it matches any of the vowels: `a, e, i, o, u`
- Print result accordingly.

## ⚠️ Code Note
- شرط `Ch4 == 'u'` في `IsVowel()` مكتوب على سطر منفصل بطريقة غير واضحة، يُفضل تنسيقه ليكون ضمن السطر نفسه.
- يمكن لاحقًا توسيع هذا التمرين ليشمل التحقق من الحروف الساكنة (Consonants) أيضًا.

## 🛠️ Concepts Used
- Character classification
- Case normalization
- Conditional logic
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with character reading and vowel check
