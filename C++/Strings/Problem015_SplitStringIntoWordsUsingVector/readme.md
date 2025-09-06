# 🧾 Split String into Words Using Vector

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a full string from the user.
2. Splits the string into words using a delimiter (space `" "`).
3. Stores each word in a `vector<string>`.
4. Prints the number of tokens and each word on a separate line.

### 🔍 Example:
Input: 
"Welcome to C++ Programming"
Output:
Tokens = 4 
Welcome 
to 
C++ 
Programming


## 💡 Solution Summary
- Use `ReadString()` to read a full line using `getline`.
- Use `SplitString(S9, " ")` to:
  - Loop while `find(" ")` returns a valid position
  - Extract each word using `substr(0, pos)`
  - Erase the processed part using `erase(0, pos + 1)`
  - Push non-empty words into `vector<string>`
- After the loop, push the last remaining word if not empty.
- Print the size of the vector and each word.

## 🛠️ Concepts Used
- String traversal
- Word splitting using delimiter
- Dynamic storage using `vector`
- Input/output formatting

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with string reading, splitting, and vector-based storage
