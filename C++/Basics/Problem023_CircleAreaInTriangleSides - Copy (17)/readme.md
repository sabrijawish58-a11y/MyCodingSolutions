# 🔺 Circle Area Using Triangle Sides

## 🧩 Problem Statement
Write a C++ program that asks the user to enter the three sides of a triangle, then calculates and prints the area of a circle inscribed in that triangle.

## 💡 Solution Summary
- Use `ReadTriangleData()` to read sides `A`, `B`, and `C`.
- Compute the semi-perimeter `P = (A + B + C) / 2`.
- Use Heron's formula to calculate the triangle's area, then derive the radius `T` of the inscribed circle:
  `T = (A × B × C) / (4 × √(P × (P − A) × (P − B) × (P − C)))`
- Use `CircleAreaByTriangle()` to compute the circle's area:  
  `Area = π × T²`
- Use `PrintResults()` to display the result.

## 🛠️ Concepts Used
- Geometry: Heron's formula and inscribed circle radius
- Constant `PI` for precision
- Math functions: `sqrt()` and `pow()`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, geometric calculation, and output
