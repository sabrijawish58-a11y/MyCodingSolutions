# Problem 013 – Delete Multiple Contacts Using IN Statement

## 🧠 Problem Description

Create a C# console application using **ADO.NET** that connects to the `ContactsDB` database and deletes multiple contacts at once using a comma-separated list of `ContactID`s passed to a SQL `IN` clause.

## 🔗 Concepts Practiced

- Using `IN` clause in SQL for batch deletion
- Executing non-query commands with `ExecuteNonQuery()`
- Handling multiple IDs dynamically
- Basic success/failure feedback based on affected rows
- Exception handling and connection management

## 🧾 SQL Query Used

```sql
DELETE FROM Contacts
WHERE ContactID IN (1, 2, 3);
