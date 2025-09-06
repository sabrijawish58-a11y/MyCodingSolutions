# ⏱️ Convert Seconds to Task Duration

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a total number of seconds, then converts and prints the equivalent duration in:
- Days
- Hours
- Minutes
- Seconds

## 💡 Solution Summary
- Use `ReadPositiveNumber()` to validate input.
- Use `SecondsToTaskDuration()` to:
  - Divide and mod by constants:
    - `SecondsPerDay = 86400`
    - `SecondsPerHour = 3600`
    - `SecondsPerMinute = 60`
  - Extract each time unit using floor division and remainder.
- Use `PrintTaskDurationDetils()` to display the result in `D:H:M:S` format.

## 🛠️ Concepts Used
- Time conversion logic using integer division and modulo
- Structs for grouped time data
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, conversion, and formatted output
