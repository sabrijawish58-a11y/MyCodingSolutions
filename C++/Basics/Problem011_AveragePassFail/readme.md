# 🎯 Average Mark Evaluation

## 🧩 Problem Statement
Write a C++ program that asks the user to enter three marks, calculates their average, and prints whether the user passed or failed. A passing average is ≥ 50.

## 💡 Solution Summary
- Use `ReadNumbers()` to read three integer marks.
- Use `SumOf3Marks()` and `CalculateAverage()` to compute the average.
- Use `CheckAverage()` to determine pass/fail status using an `enum`.
- Use `PrintResults()` to display the average and result.

## 🛠️ Concepts Used
- Reference parameters (`int&`) for input
- Arithmetic operations and type casting to `float`
- `enum` for semantic clarity (`Pass` / `Fail`)
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, average calculation, and result classification
