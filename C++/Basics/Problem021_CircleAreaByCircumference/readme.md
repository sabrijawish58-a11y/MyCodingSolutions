# 🔵 Circle Area Using Circumference

## 🧩 Problem Statement
Write a C++ program that asks the user to enter the circumference of a circle, then calculates and prints its area.

## 💡 Solution Summary
- Use `ReadCircumference()` to read the circumference `L` from the user.
- Use `CircleAreaByCircumference()` to compute the area using the formula:  
  `Area = L² / (4 × π)`  
  This formula is derived from:  
  `C = 2πr → r = C / (2π) → Area = πr² = π(C² / 4π²) = C² / (4π)`

- Use `PrintResults()` to display the result.

## 🛠️ Concepts Used
- Geometry: Area from circumference
- Constant `PI` for precision
- Math function `pow()` for squaring
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, calculation, and output
