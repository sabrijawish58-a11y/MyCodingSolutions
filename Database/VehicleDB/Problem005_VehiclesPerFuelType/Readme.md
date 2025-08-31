# Problem 005 – Vehicles per Fuel Type per Make (1950–2000)

## 🧠 Problem Description

Retrieve the number of vehicles manufactured between **1950 and 2000**, grouped by **make** and **fuel type**. The goal is to analyze how different manufacturers used various fuel types during this period.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `MakeID`, `FuelTypeID`, and `Year`
- `Makes`: Contains make names with `MakeID` as primary key
- `FuelTypes`: Contains fuel type names with `FuelTypeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Makes` and `FuelTypes` using foreign keys
- Filter records where `Year` is between 1950 and 2000
- Group by both `Make` and `FuelTypeName`
- Count the number of vehicles per group
- Sort by `Make` alphabetically

## 🧾 SQL Query

```sql
SELECT Makes.Make,
       FuelTypes.FuelTypeName,
       COUNT(*) AS NumOfVehicles
FROM VehicleDetails
INNER JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
INNER JOIN FuelTypes ON VehicleDetails.FuelTypeID = FuelTypes.FuelTypeID
WHERE VehicleDetails.Year BETWEEN 1950 AND 2000
GROUP BY Makes.Make, FuelTypes.FuelTypeName
ORDER BY Makes.Make;
