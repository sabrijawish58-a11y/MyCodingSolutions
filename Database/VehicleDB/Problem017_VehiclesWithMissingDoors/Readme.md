# Problem 017 – Vehicles with Unspecified Number of Doors

## 🧠 Problem Description

Retrieve all vehicle records where the **number of doors is not specified**. This query helps identify incomplete or missing data entries in the `VehicleDetails` table.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including the `NumDoors` column

## 🔗 Query Logic

- Select all columns from `VehicleDetails`
- Filter records where `NumDoors IS NULL`

## 🧾 SQL Query

```sql
SELECT *
FROM VehicleDetails
WHERE VehicleDetails.NumDoors IS NULL;
