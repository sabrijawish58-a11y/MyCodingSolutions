# 🔺 Circle Area Inscribed in Triangle

## 🧩 Problem Statement
Write a C++ program that asks the user to enter the side and base of a triangle, then calculates and prints the area of a circle inscribed inside it using a geometric formula.

## 💡 Solution Summary
- Use `ReadTriangleData()` to read side `A` and base `B`.
- Use `CircleAreaByTriangle()` to compute the area using the formula:  
  `Area = π × (B² / 4) × ((2A − B) / (2A + B))`  
  This formula estimates the area of a circle inscribed in a triangle based on its dimensions.

- Use `PrintResults()` to display the result.

## 🛠️ Concepts Used
- Geometry: Circle area from triangle dimensions
- Constant `PI` for precision
- Math functions: `pow()` for squaring
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, calculation, and output
