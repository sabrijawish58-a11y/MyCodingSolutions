# Problem 009 – Add New Contact and Retrieve Inserted ID

## 🧠 Problem Description

Create a C# console application using **ADO.NET** that connects to the `ContactsDB` database, inserts a new contact into the `Contacts` table, and retrieves the newly inserted `ContactID` using `SCOPE_IDENTITY()`.

## 🔗 Concepts Practiced

- Using `SqlCommand` with `INSERT INTO`
- Retrieving auto-generated identity values with `ExecuteScalar()`
- Structs for modeling contact data
- Parameterized queries to prevent SQL injection
- Basic success/failure feedback based on result

## 🧾 SQL Query Used

```sql
INSERT INTO Contacts (FirstName, LastName, Email, Phone, Address, CountryID)
VALUES (@FirstName, @LastName, @Email, @Phone, @Address, @CountryID);
SELECT SCOPE_IDENTITY();
