# Problem 018 – Count of Vehicles with Unspecified Number of Doors

## 🧠 Problem Description

Calculate the total number of vehicles where the **number of doors is not specified**. This query helps assess data completeness and identify records with missing values in the `NumDoors` field.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including the `NumDoors` column

## 🔗 Query Logic

- Filter records where `NumDoors IS NULL`
- Count the total number of such records

## 🧾 SQL Query

```sql
SELECT COUNT(*) AS TotalWithNoSpecifiedDoors
FROM VehicleDetails
WHERE NumDoors IS NULL;
