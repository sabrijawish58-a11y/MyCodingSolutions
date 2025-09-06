# 🔁 Replace Word in String Using Split and MatchCase Option

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a string and two words: one to replace, and one to replace with.
2. Splits the string into words using space `" "` as delimiter.
3. Replaces the target word with the new word:
   - First with case sensitivity.
   - Then ignoring case sensitivity.
4. Joins the words back into a single string and prints both results.

### 🔍 Example:
Input:
Original String: Welcome to Jordan , Jordan is a nice country

Word to Replace: jordan 
Replace With: USA
Output:
Replace with Match Case: Welcome to Jordan , Jordan is a nice country

Replace with don't Match Case: Welcome to USA , USA is a nice country


## 💡 Solution Summary
- Use `SplitString()` to divide the string into words.
- Use `LowerAllString()` to normalize case when `MatchCase == false`.
- Traverse the vector and replace matching words.
- Use `JoinString()` to reassemble the string.
- Print both versions.

## 🛠️ Concepts Used
String splitting and joining

Case normalization

Word replacement logic

Input/output formatting

## 📦 Folder Contents
main.cpp: Contains the full solution with split-based word replacement and match-case control
