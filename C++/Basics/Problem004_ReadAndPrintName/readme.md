# 🚗 Driver License Eligibility Check

## 🧩 Problem Statement
Write a C++ program that asks the user for their age and whether they have a driving license, then prints whether they are accepted or rejected based on the following condition:

> The user is accepted if their age is greater than 21 **and** they have a driving license.

## 💡 Solution Summary
- Define a `struct stInfo` to hold age and license status.
- Use `ReadInfo()` to collect user input.
- Use `IsAccepted()` to evaluate the condition.
- Use `PrintResult()` to display "Hired" or "Rejected".

## 🛠️ Concepts Used
- `struct` for grouping related data
- Boolean logic with `&&` operator
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with struct and logic
