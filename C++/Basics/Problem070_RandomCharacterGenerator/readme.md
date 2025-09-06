# 🔡 Random Character Generator

## 🧩 Problem Statement
Write a C++ program that generates one random character from each of the following types:
- Small letter (`a–z`)
- Capital letter (`A–Z`)
- Special character (`!–/`)
- Digit (`0–9`)

## 💡 Solution Summary
- Use `enum enCharTayp` to classify character types.
- Use `RandomNumber(From, To)` to generate a random ASCII value within the desired range.
- Use `GetRandomCharacter(CharType)` to:
  - Map each type to its ASCII range
  - Return a random character using `char(...)`
- Seed the random generator using `srand(time(NULL))` in `main()`.

### 🔍 Example Output
n 
G
4

## 🛠️ Concepts Used
- ASCII character manipulation
- Random number generation using `rand()`
- Enum-based type classification
- Input/Output using `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with character generation logic
