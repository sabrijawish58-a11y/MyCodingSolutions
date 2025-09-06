# 🏦 Banking System with Transactions (File-Based)

## 📌 Project Overview
This C++ console application simulates a basic banking system using a text file (`Clients.txt`) as a simple database. It allows users to:
- Add, update, delete, and find clients
- Deposit and withdraw money
- View total balances across all accounts
- Navigate through a main menu and a transactions menu

## 🧩 Features
- Persistent storage using file I/O
- Data validation to prevent duplicate accounts
- Formatted output using `iomanip`
- Enum-based menu navigation
- Transaction logic with balance validation


## 🧪 Sample Data Format
Each client record is stored in `Clients.txt` using the following format:
AccountNumber#//#PinCode#//#Name#//#Phone#//#Balance


### Example:
A1001#//#1234#//#Sabri#//#0999999999#//#1500.75


## 🛠️ How to Use
1. Compile the project using any C++ compiler:
BankingSystemWithTransactions.cpp

3. Use the menu to interact with the system.

## 📦 Dependencies
- Standard C++ libraries: `<iostream>`, `<fstream>`, `<string>`, `<vector>`, `<iomanip>`

## 🚀 Future Enhancements
- Encrypt PIN codes
- Add login/authentication
- Export reports to CSV
- Use `map` or `unordered_map` for faster lookups
- Add transaction history per client

## 👨‍💻 Author
Sabri — Building a structured archive of practical programming problems.

