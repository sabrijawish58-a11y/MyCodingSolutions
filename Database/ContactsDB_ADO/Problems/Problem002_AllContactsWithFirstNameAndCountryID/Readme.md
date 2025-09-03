# Problem 002 – Filter Contacts by First Name and Country ID

## 🧠 Problem Description

Create a C# console application using **ADO.NET** that connects to the `ContactsDB` database and retrieves all contacts whose:

- `FirstName` matches a given string
- `CountryID` matches a given integer

The results are displayed in the console with full contact details.

## 🔗 Concepts Practiced

- Parameterized SQL queries using `SqlCommand.Parameters`
- Filtering data with `WHERE` clause
- Preventing SQL injection using parameters
- Reading data using `SqlDataReader`
- Exception handling with `try-catch`

## 🧾 SQL Query Used

```sql
SELECT * FROM Contacts
WHERE CountryID = @CountryID AND FirstName = @FirstName;
