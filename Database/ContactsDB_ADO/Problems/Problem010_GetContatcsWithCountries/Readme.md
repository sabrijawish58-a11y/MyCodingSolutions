# Problem 010 – List Contacts with Country Names Using INNER JOIN

## 🧠 Problem Description

Create a C# console application using **ADO.NET** that connects to the `ContactsDB` database and retrieves all contacts along with their corresponding country names. This is done by performing an `INNER JOIN` between the `Contacts` and `Countries` tables.

## 🔗 Concepts Practiced

- Using `INNER JOIN` to combine data from related tables
- Reading joined data using `SqlDataReader`
- Displaying enriched contact information
- Exception handling and connection management

## 🧾 Correct SQL Query

```sql
SELECT ContactID, FirstName, LastName, Email, Phone, Address, Countries.CountryName
FROM Contacts
INNER JOIN Countries ON Countries.CountryID = Contacts.CountryID;
