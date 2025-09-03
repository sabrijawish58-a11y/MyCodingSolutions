# Problem 005 – Search Contacts by First Name Contains

## 🧠 Problem Description

Create a C# console application using **ADO.NET** that connects to the `ContactsDB` database and retrieves all contacts whose `FirstName` **contains a specific substring**.

## 🔗 Concepts Practiced

- Using `LIKE '%value%'` pattern in SQL
- Parameterized queries to prevent SQL injection
- Reading and displaying data using `SqlDataReader`
- Exception handling and resource management

## 🧾 SQL Query Used

```sql
SELECT * FROM Contacts
WHERE FirstName LIKE '%' + @Contain + '%';
