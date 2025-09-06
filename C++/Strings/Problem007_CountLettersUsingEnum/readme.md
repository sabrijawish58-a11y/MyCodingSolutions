# 🔡 Count Capital and Small Letters Using Enum

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Counts how many uppercase and lowercase letters exist.
3. Uses both direct functions and a unified function with `enum` to perform the counting.
4. Prints all results.

### 🔍 Example Input
Input: "Welcome To C++ Programming"

### 🔍 Example Output

String Length = 27 
Capital Letters Count = 3 
Small Letters Count = 20

Method String Length = 27 
Capital Letters Count = 3 
Small Letters Count = 20

## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `CountCapitalLetters()` and `CountSmallLetters()` for direct counting.
- Use `CountLetters(S5, WhatToCount)` with `enum enWhatToCount` to:
  - Count based on the selected type: `CapitalLetters`, `SmallLetters`, or `All`
  - Traverse the string and apply `isupper()` or `islower()` accordingly

## ⚠️ Code Note
- المتغير `string S1 = " ";` يُفضل تغييره إلى `""` لتجنب إدخال فراغ غير مرغوب فيه.
- استخدام `enum` هنا يُعد خطوة ممتازة نحو كتابة كود قابل للتوسعة والصيانة.

## 🛠️ Concepts Used
- String traversal
- Character classification
- Enum-based logic control
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string reading, counting logic, and enum-based abstraction
