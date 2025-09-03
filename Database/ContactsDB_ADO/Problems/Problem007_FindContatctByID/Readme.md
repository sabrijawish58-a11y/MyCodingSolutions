# Problem 007 – Find Contact by ID Using Struct and ADO.NET

## 🧠 Problem Description

Create a C# console application using **ADO.NET** that connects to the `ContactsDB` database and retrieves a contact's full information based on a given `ContactID`. The data is stored in a custom `struct` named `stContact`.

## 🔗 Concepts Practiced

- Using `SqlDataReader` to read a single record
- Parameterized queries to prevent SQL injection
- Passing data by reference using `ref`
- Structs for modeling data objects
- Conditional logic to check if a record was found

## 🧾 SQL Query Used

```sql
SELECT * FROM Contacts
WHERE ContactID = @ContactID;
