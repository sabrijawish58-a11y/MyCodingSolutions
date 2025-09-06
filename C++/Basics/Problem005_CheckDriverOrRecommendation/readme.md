# ✅ Recommendation-Based Hiring Logic

## 🧩 Problem Statement
Write a C++ program that asks the user for their age, driving license status, and whether they have a recommendation. The program should print "Hired" if:

- The user has a recommendation  
**OR**
- The user is older than 21 **and** has a driving license

Otherwise, print "Rejected".

## 💡 Solution Summary
- Use a `struct stInfo` to store user input.
- Use `ReadInfo()` to collect age, license, and recommendation status.
- Use `IsAccepted()` to apply the hiring logic.
- Use `PrintResult()` to display the decision.

## 🛠️ Concepts Used
- `struct` for structured data
- Boolean logic with `||` and `&&`
- Input/Output with `cin` and `cout`
- Modular design using functions

## 📦 Folder Contents
- `main.cpp`: Contains the full solution with structured input and conditional logic
