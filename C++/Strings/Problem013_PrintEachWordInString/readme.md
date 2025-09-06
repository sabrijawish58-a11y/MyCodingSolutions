# 🧾 Print Each Word in a String

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Splits the string into words using space `" "` as a delimiter.
3. Prints each word on a separate line.

### 🔍 Example Input
Input: "Welcome to C++ Programming"
Ouput:
Your string words are :

Welcome 
to 
C++ 
Programming


## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `PrintEachWordInString()` to:
  - Loop while `find(" ")` returns a valid position
  - Extract the word using `substr(0, pos)`
  - Erase the processed part using `erase(0, pos + 1)`
  - Print each word if not empty
- Print the last remaining word after the loop ends.

## 🛠️ Concepts Used
- String traversal
- Word splitting using delimiter
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string reading and word-by-word printing
