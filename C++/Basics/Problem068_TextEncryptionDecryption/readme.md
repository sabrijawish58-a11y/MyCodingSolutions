# 🔐 Text Encryption & Decryption (Caesar Cipher)

## 🧩 Problem Statement
Write a C++ program that:
1. Reads a line of text from the user.
2. Encrypts the text using a Caesar Cipher with a fixed key.
3. Decrypts the encrypted text back to its original form.

### 🔍 Example
Input: `Saeed`  
Encryption Key: `2`  
Encrypted: `Ucggf`  
Decrypted: `Saeed`

## 💡 Solution Summary
- Use `ReadText()` to read a full line using `getline()`.
- Use `EncryptText()` to:
  - Loop through each character
  - Add the encryption key to its ASCII value
- Use `DecryptionText()` to:
  - Subtract the encryption key from each character's ASCII value
- Print original, encrypted, and decrypted text.

## ⚠️ Notes
- The loop condition should be `i < Text.length()` instead of `i <= Text.length()` to avoid accessing out-of-bounds memory.
- This cipher does not handle wrapping or non-letter characters.

## 🛠️ Concepts Used
- Caesar Cipher encryption
- ASCII manipulation
- String traversal and character replacement
- Input/Output using `cin`, `cout`, and `getline`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with encryption and decryption logic
