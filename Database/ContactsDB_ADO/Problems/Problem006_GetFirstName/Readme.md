# Problem 006 – Get First Contact's First Name by Country ID

## 🧠 Problem Description

Create a C# console application using **ADO.NET** that connects to the `ContactsDB` database and retrieves the `FirstName` of the **first contact** whose `CountryID` matches a given value. The result is printed to the console.

## 🔗 Concepts Practiced

- Using `ExecuteScalar()` to retrieve a single value
- Parameterized queries to prevent SQL injection
- Basic filtering with `WHERE` clause
- Exception handling and connection management

## 🧾 SQL Query Used

```sql
SELECT FirstName FROM Contacts
WHERE CountryID = @CountryID;
