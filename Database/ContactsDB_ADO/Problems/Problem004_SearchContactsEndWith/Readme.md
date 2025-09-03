# Problem 004 – Search Contacts by First Name Suffix

## 🧠 Problem Description

Create a C# console application using **ADO.NET** that connects to the `ContactsDB` database and retrieves all contacts whose `FirstName` **ends with a specific character or string**.

## 🔗 Concepts Practiced

- Using `LIKE` with suffix matching in SQL
- Parameterized queries to prevent SQL injection
- Reading data using `SqlDataReader`
- Displaying contact details in the console
- Exception handling and resource management

## 🧾 SQL Query Used

```sql
SELECT * FROM Contacts
WHERE FirstName LIKE '%' + @EndWith;
