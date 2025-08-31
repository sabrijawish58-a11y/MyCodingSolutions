# Problem 046 – Display Fuel Types in Random Order

## 🧠 Problem Description

Retrieve all records from the `FuelTypes` table and display them in a **random order** each time the query is executed. This is useful for testing UI randomness or rotating display logic.

## 📊 Tables Used

- `FuelTypes`: Contains fuel type records

## 🔗 Query Logic

- Use `ORDER BY NEWID()` to shuffle the result set
- `NEWID()` generates a unique GUID for each row, which SQL Server uses to randomize order

## 🧾 SQL Query

```sql
SELECT *
FROM FuelTypes
ORDER BY NEWID();
