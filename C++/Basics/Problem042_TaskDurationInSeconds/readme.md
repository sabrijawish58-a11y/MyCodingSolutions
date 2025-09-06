# ⏳ Task Duration in Seconds

## 🧩 Problem Statement
Write a C++ program that asks the user to enter a task duration in days, hours, minutes, and seconds, then calculates and prints the total duration in seconds.

## 💡 Solution Summary
- Use a `struct strTaskDuration` to store the time components.
- Use `ReadPositiveNumber()` to validate each input.
- Use `ReadTaskDuration()` to collect all time units.
- Use `TaskDurationInSeconds()` to compute the total duration:
  - Days → `× 24 × 60 × 60`
  - Hours → `× 60 × 60`
  - Minutes → `× 60`
  - Seconds → `+`

## 🛠️ Concepts Used
- Structs for grouped time data
- Time conversion logic
- Input validation using `do-while`
- Input/Output using `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with input, struct usage, and time conversion
