# 🧪 ContactsDB – ADO.NET Practice Problems

## 📌 Purpose

This folder contains a series of C# problems designed to help you practice **ADO.NET** using the `ContactsDB` database. Each problem focuses on a specific operation such as reading, inserting, updating, or deleting contact data.

## 🧱 Database Structure

The database consists of two main tables:

### 🧍 Contacts
- `ContactID` – Primary Key
- `FirstName`
- `LastName`
- `Email`
- `Phone`
- `Address`
- `CountryID` – Foreign Key referencing `Countries.CountryID`

### 🌍 Countries
- `CountryID` – Primary Key
- `CountryName`

Each contact is linked to a country, allowing you to practice joins and foreign key relationships.

## 🎯 Learning Goals

- Connect to SQL Server using `SqlConnection`
- Execute queries with `SqlCommand`
- Read data using `SqlDataReader`
- Use parameters to prevent SQL injection
- Handle exceptions and manage resources
- Perform joins between `Contacts` and `Countries`
- Document each solution for reproducibility

## 📂 Folder Structure

Each problem is stored in its own folder with a Readme.md

