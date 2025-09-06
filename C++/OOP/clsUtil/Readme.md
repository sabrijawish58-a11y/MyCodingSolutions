# 🧰 clsUtil

## 📌 Purpose
A utility class that provides a wide range of helper functions for:
- Random generation
- Swapping values
- Array shuffling
- Encryption/Decryption
- Date manipulation
- Number-to-text conversion

## 🧱 Key Features

### 🔢 Random Generation
- `RandomNumber(From, To)`
- `GetRandomCharacter(enCharType)`
- `GenerateWord(enCharType, Length)`
- `GenerateKey(enCharType)`
- `GenerateKeys(NumberOfKeys, enCharType)`

### 🔁 Swapping
- Overloaded `Swap()` for:
  - `int`, `double`, `bool`, `char`, `string`, `clsDate`

### 🔀 Array Shuffling
- `ShuffleArray(int arr[100], int arrLength)`
- `ShuffleArray(string arr[100], int arrLength)`

### 🔐 Text Encryption
- `EncryptText(string Text, short Key)`
- `DecryptText(string Text, short Key)`

### 📅 Date Utilities
- Uses `clsDate::SwapDates()` internally

### 🔤 Number to Text
- `NumberToText(int Number)` converts numbers up to billions into English words

## 🧪 Example Usage
```cpp
clsUtil::Srand();
cout << clsUtil::GenerateKey(clsUtil::MixChars) << endl;
cout << clsUtil::EncryptText("Hello") << endl;
cout << clsUtil::NumberToText(2025) << endl;
📦 Files
clsUtil.h: Contains all static utility methods