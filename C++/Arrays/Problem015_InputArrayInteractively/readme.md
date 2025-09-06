# 🧮 Interactive Array Input

## 🧩 Problem Statement
Write a C++ program that:
1. Asks the user to enter numbers one by one.
2. After each entry, asks whether the user wants to add more.
3. Stores all entered numbers in an array.
4. Prints the array and its final length.

### 🔍 Example
Input:
Please enter a number? 7 Do you want to add more numbers? [0]:No,[1]:yes? 1 
Please enter a number? 15 Do you want to add more numbers? [0]:No,[1]:yes? 0
Output:
Array Length: 2 
Array elements: 7 15

## 💡 Solution Summary
- Use `ReadNumber()` to read a single number from the user.
- Use `AddArrayElement()` to insert the number into the array and update its length.
- Use `InputUserNumbersInArray()` to loop until the user chooses to stop.
- Use `PrintArray()` to display the final array.
- Initialize `arrLength = 0` to track the number of inserted elements.

## 🛠️ Concepts Used
- Dynamic input using `do-while`
- Array manipulation and length tracking
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with interactive array input and printing
