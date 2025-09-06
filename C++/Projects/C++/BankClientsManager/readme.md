# 🏦 Bank Clients Manager (File-Based System)

## 📌 Project Overview
This C++ console application manages bank clients using a text file (`Clients.txt`) as a simple database. It allows users to:
- Add new clients
- View all clients
- Find a client by account number
- Update client information
- Delete clients
- Navigate through a main menu interface

## 🧩 Features
- Persistent storage using file I/O
- Data validation to prevent duplicate accounts
- Modular design with reusable functions
- Formatted output using `iomanip`
- Enum-based menu navigation

## 🧪 Sample Data Format
Each client record is stored in `Clients.txt` using the following format:
AccountNumber#//#PinCode#//#Name#//#Phone#//#Balance

### Example:
A1001#//#1234#//#Mohammed Faid#//#0999999999#//#1500.75

## 🛠️ How to Use
1. Compile the following project using any C++ compiler:
BankClientsManager.cpp

## 📦 Dependencies
- Standard C++ libraries: `<iostream>`, `<fstream>`, `<string>`, `<vector>`, `<iomanip>`

## 🚀 Future Enhancements
- Encrypt PIN codes
- Add login/authentication
- Export reports to CSV
- Use `map` or `unordered_map` for faster lookups

## 👨‍💻 Author
Sabri — Building a structured archive of practical programming problems.
