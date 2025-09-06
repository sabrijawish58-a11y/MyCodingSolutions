# 🔁 Check Palindrome Rows in 2D Matrix

## 🧩 Problem Statement
Write a C++ program that:
1. Initializes a 3×3 matrix with predefined values.
2. Prints the matrix.
3. Checks whether each row is a palindrome (i.e., symmetric).
4. Prints the result.

### 🔍 Example Output
Matrix : 
1 2 1 
5 5 5 
7 3 7

YES : Matrix is Palindrome.

Or if any row is not symmetric:
NO : Matrix is NOT Palindrome.

## 💡 Solution Summary
- Use `PrintMatrix()` to display the matrix.
- Use `IsPalindromeMatrix()` to:
  - Traverse each row
  - Compare `Matrix[i][j]` with `Matrix[i][Cols - 1 - j]` for half the columns
  - Return `false` if any mismatch is found
- Print result accordingly.

## ⚠️ Code Note
- هناك تعليق غير مكتمل داخل `IsPalindromeMatrix`، يبدو أنه يحتوي على ملاحظات باللغة العربية داخل السطر البرمجي. يُفضل نقله خارج الكود لتجنب أخطاء الترجمة أو التفسير.

## 🛠️ Concepts Used
- 2D array traversal
- Row-wise symmetry check
- Formatted output using `iomanip`

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with matrix initialization, printing, and palindrome validation
