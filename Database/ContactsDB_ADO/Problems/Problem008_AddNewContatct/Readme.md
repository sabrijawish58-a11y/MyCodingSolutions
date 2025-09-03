# Problem 008 – Add New Contact Using Struct and ADO.NET

## 🧠 Problem Description

Create a C# console application using **ADO.NET** that connects to the `ContactsDB` database and inserts a new contact into the `Contacts` table. The contact data is passed using a custom `struct` named `stContact`.

## 🔗 Concepts Practiced

- Using `SqlCommand` with `INSERT INTO`
- Parameterized queries to prevent SQL injection
- Structs for modeling contact data
- Executing non-query commands with `ExecuteNonQuery()`
- Basic success/failure feedback based on affected rows

## 🧾 SQL Query Used

```sql
INSERT INTO Contacts (FirstName, LastName, Email, Phone, Address, CountryID)
VALUES (@FirstName, @LastName, @Email, @Phone, @Address, @CountryID);
