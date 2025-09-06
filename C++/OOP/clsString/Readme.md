# 🔤 clsString

## 📌 Purpose
A powerful string utility class in C++ that encapsulates a wide range of text manipulation functions. It supports formatting, analysis, transformation, and cleaning of strings.

---

## 🧱 Key Features

### 🧬 Construction & Access
- `clsString()` → Initializes with empty string
- `clsString(string)` → Initializes with value
- Property `Value` for direct access

---

### 📏 Analysis & Counting
- `Length()` → Returns string length
- `CountWords()` → Number of words
- `CountLetters()` → Total, capital, or small letters
- `CountSpecificLetter(char)` → With optional case sensitivity
- `CountVowels()` → Counts vowels
- `IsVowel(char)` → Checks if character is a vowel

---

### 🔠 Case Manipulation
- `UpperAllString()` / `LowerAllString()`
- `UpperFirstLetterOfEachWord()` / `LowerFirstLetterOfEachWord()`
- `InvertAllLettersCase()` / `InvertLetterCase(char)`

---

### 🧹 Cleaning & Trimming
- `TrimLeft()` / `TrimRight()` / `Trim()`
- `RemovePunctuations()` → Removes symbols

---

### 🔗 Splitting & Joining
- `Split(string Delim)` → Splits string into vector
- `JoinString(vector<string>, Delim)` → Joins vector into string
- `JoinString(string[], Length, Delim)` → Joins array into string

---

### 🔄 Replacement & Reversal
- `ReplaceWord(string, string)` → Replaces word with optional case matching
- `ReverseWordsInString()` → Reverses word order

---

## 🧪 Example Usage
```cpp
clsString s("hello world");
s.UpperFirstLetterOfEachWord();
cout << s.Value << endl; // Output: Hello World

cout << clsString::CountVowels("Programming") << endl; // Output: 3

vector<string> words = clsString::Split("C++ is powerful", " ");
cout << clsString::JoinString(words, "-") << endl; // Output: C++-is-powerful

📦 Files
clsString.h → Contains full implementation