# 🔤 Extract First Letter of Each Word

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Extracts and prints the first letter of each word in the string.

### 🔍 Example Input
Input: "Welcome to the world of programming"

### 🔍 Example Output
First letters of this string :
W 
t 
t 
w 
o 
p

## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `PrintFirstLetterOfEachWord()` to:
  - Track whether the current character is the start of a word
  - Print it if true
  - Reset the flag when encountering a space

## ⚠️ Code Note
- المتغير `isFirstLetter` يُستخدم لتحديد بداية الكلمة.
- يُفضل إزالة المسافة الابتدائية من `string S1 = " ";` لتجنب طباعة حرف فارغ في البداية.

## 🛠️ Concepts Used
- String traversal
- Word boundary detection
- Character-level analysis
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string reading and first-letter extraction
