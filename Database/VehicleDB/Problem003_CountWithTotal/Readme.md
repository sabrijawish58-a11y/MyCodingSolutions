# Problem 003 – Count Vehicles by Make (1990–2000) with Total Count

## 🧠 Problem Description

Retrieve the number of vehicles manufactured between **1990 and 2000**, grouped by **make**, and display the **total number of vehicles** in the entire database alongside each result.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `MakeID` and `Year`
- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Makes` on `MakeID`
- Filter records where `Year` is between 1990 and 2000
- Group by `Make` and count vehicles
- Use a subquery to calculate the total number of vehicles in the database
- Display both counts side by side
- Sort by number of vehicles in descending order

## 🧾 SQL Query

```sql
SELECT Makes.Make,
       COUNT(*) AS NumVehicles,
       (SELECT COUNT(*) FROM VehicleDetails) AS TotalVehicles
FROM VehicleDetails
INNER JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
WHERE VehicleDetails.Year BETWEEN 1990 AND 2000
GROUP BY Makes.Make
ORDER BY NumVehicles DESC;
