# 🧾 EmployeesDB – Employee Management Database

## 📌 Overview

**EmployeesDB** is a learning-focused SQL database designed to simulate organizational structures and employee-manager relationships. It provides a practical environment for writing queries involving self-referencing joins, conditional logic, and hierarchical data analysis.

## 🧩 Core Table

- **Employees**
  - `EmployeeID` – Primary Key
  - `Name` – Employee name
  - `ManagerID` – Foreign Key referencing `EmployeeID` (self-join)
  - `Salary` – Employee salary

## 🔗 Relationships

- The `Employees` table includes a **self-referencing foreign key**:
  - Each employee may have a manager who is also an employee.
  - This enables hierarchical queries and organizational reporting.

## 🧠 Learning Objectives

- Practice **INNER JOIN** and **LEFT JOIN** with self-referencing data
- Use `CASE` statements to handle missing manager names
- Retrieve employees managed by specific individuals
- Build queries for full organizational listings

## 📂 Structure

Each problem is stored in its own folder and includes:
- A `.sql` file with the query
- A `README.md` explaining the logic and purpose

Example:
