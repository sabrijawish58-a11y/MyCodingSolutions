# 🏦 BankProject

## 📌 Overview
BankProject is a console-based banking system developed in C++ using Object-Oriented Programming (OOP) principles. It simulates core banking operations such as client management, currency exchange, user authentication, and transaction tracking through a modular screen-based architecture.

---

## 🧱 Architecture

The project is organized into multiple screens and classes, each responsible for a specific domain:

### 🔐 Authentication Module
- `clsLoginScreen`: Handles user login interface
- `clsLoginRegisterScreen`: Tracks login history
- `clsAddUserScreen`, `clsDeleteUserScreen`, `clsUpdateUserScreen`: Manage user accounts
- `clsUsersListScreen`, `clsFindUserScreen`, `clsManageUsersScreen`: Display and search users

### 👤 Client Management
- `clsAddClientScreen`, `clsDeleteClientScreen`, `clsUpdateClientScreen`: CRUD operations for clients
- `clsClientsListScreen`, `clsFindClientScreen`: Display and search clients
- `clsClient`: Core class representing a bank client

### 💱 Currency Exchange
- `clsCurrencyCalculatorScreen`: Calculate exchange rates
- `clsCurrencyExchangeMainScreen`: Main interface for currency operations
- `clsCurrenciesList`: Display available currencies
- `clsCurrency`, `clsFindCurrencyScreen`, `clsUpdateCurrencyScreen`: Currency logic and management

### 💸 Transactions
- `clsDepositScreen`, `clsWithdrawScreen`: Handle deposits and withdrawals
- `clsTransferScreen`, `clsTransferLogScreen`: Manage transfers between clients
- `clsTotalBalancesScreen`: Show total balances across all clients
- `clsTransactionsScreen`: Central hub for transaction operations

### 📅 Utilities & Core Classes
- `clsDate`: Full-featured date manipulation (validation, arithmetic, formatting)
- `clsPeriod`: Represents a time range with overlap detection
- `clsString`: Text processing utilities
- `clsUtil`: Random generation, encryption, array shuffling
- `clsInputValidate`: Input validation for numbers, strings, and dates
- `clsPerson`: Base class for shared attributes between clients and users
- `clsInterfaceCommunication`, `clsScreen`, `clsMainMenueScreen`: UI and navigation logic

---

## 📂 Data Files
The system uses flat files for persistent storage:
- `Clients.txt`, `Users.txt`: Store client and user data
- `Currencies.txt`: Currency definitions and rates
- `TransferLog.txt`, `LoginRegister.txt`: Track transfers and login history
- `Main.txt`: Entry point configuration

---

## 🚀 How to Run
1. Open `BankProject.sln` in Visual Studio.
2. Build the solution.
3. Run the application from `BankProject.cpp`.

---

## 🎯 Features
- Modular screen-based design for clarity and scalability
- Full CRUD operations for clients and users
- Currency exchange with live calculation logic
- Secure login system with logging
- Transaction tracking and reporting
- Utility classes for date, string, and input handling

---

## 🧠 Technologies Used
- C++
- Object-Oriented Programming (Encapsulation, Inheritance, Abstraction)
- Visual Studio Project Structure
- File-based data persistence

---

## 🏷️ Tags
`C++`, `Banking`, `OOP`, `Console App`, `Currency Exchange`, `User Management`, `Date Utilities`, `Text Processing`, `Visual Studio`

