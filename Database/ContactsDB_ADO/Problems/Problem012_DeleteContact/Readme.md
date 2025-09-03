# Problem 012 – Delete Contact by ID Using ADO.NET

## 🧠 Problem Description

Create a C# console application using **ADO.NET** that connects to the `ContactsDB` database and deletes a contact from the `Contacts` table based on a given `ContactID`.

## 🔗 Concepts Practiced

- Executing `DELETE` statements in SQL
- Using `ExecuteNonQuery()` to perform non-returning operations
- Parameterized queries to prevent SQL injection
- Conditional feedback based on affected rows
- Basic error handling with `try-catch`

## 🧾 SQL Query Used

```sql
DELETE FROM Contacts
WHERE ContactID = @ContactID;
