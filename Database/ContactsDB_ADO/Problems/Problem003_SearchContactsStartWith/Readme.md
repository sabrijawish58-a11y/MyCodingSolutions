# Problem 003 – Search Contacts by First Name Prefix

## 🧠 Problem Description

Create a C# console application using **ADO.NET** that connects to the `ContactsDB` database and retrieves all contacts whose `FirstName` **starts with a given prefix**.

## 🔗 Concepts Practiced

- Using `LIKE` with parameters in SQL
- Dynamic filtering based on user input
- Preventing SQL injection with `SqlParameter`
- Reading and displaying data using `SqlDataReader`
- Exception handling and resource management

## 🧾 SQL Query Used

```sql
SELECT * FROM Contacts
WHERE FirstName LIKE @StartWith + '%';
