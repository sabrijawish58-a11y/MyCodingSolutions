# 🟡 Circle Area Inscribed in a Square

## 🧩 Problem Statement
Write a C++ program that asks the user to enter the side length of a square, then calculates and prints the area of a circle inscribed inside that square.

## 💡 Solution Summary
- Use `ReadSquareSide()` to read the side length `A` of the square.
- Use `CircleAreaInscribedInSquare()` to compute the area using the formula:  
  `Area = (π × A²) / 4`  
  This formula assumes the diameter of the circle equals the side of the square.
- Use `PrintResults()` to display the result.

## 🛠️ Concepts Used
- Geometry: Area of a circle inscribed in a square
- Constant `PI` for precision
- Math function `pow()` for squaring
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, calculation, and output
