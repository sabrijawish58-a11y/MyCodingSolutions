# Problem 011 – Update Contact by ID Using ADO.NET

## 🧠 Problem Description

Create a C# console application using **ADO.NET** that connects to the `ContactsDB` database and updates the information of an existing contact based on its `ContactID`. The new data is passed using a custom `struct` named `stContact`.

## 🔗 Concepts Practiced

- Using `UPDATE` statements in SQL
- Executing non-query commands with `ExecuteNonQuery()`
- Structs for modeling contact data
- Parameterized queries to prevent SQL injection
- Conditional feedback based on affected rows

## 🧾 SQL Query Used

```sql
UPDATE Contacts
SET FirstName = @FirstName,
    LastName = @LastName,
    Email = @Email,
    Phone = @Phone,
    Address = @Address,
    CountryID = @CountryID
WHERE ContactID = @ContactID;
