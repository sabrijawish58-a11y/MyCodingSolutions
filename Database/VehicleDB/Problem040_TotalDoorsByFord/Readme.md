# Problem 040 – Total Number of Doors Manufactured by Ford

## 🧠 Problem Description

Retrieve the **total number of doors** manufactured by the vehicle make **Ford** by summing the `NumDoors` field across all its vehicles. This query isolates production data for a specific manufacturer.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `MakeID` and `NumDoors`
- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Makes` using `MakeID`
- Group results by `Make`
- Use `HAVING Make = 'Ford'` to filter for Ford only
- Use `SUM(NumDoors)` to calculate total doors

## 🧾 SQL Query

```sql
SELECT Makes.Make,
       SUM(VehicleDetails.NumDoors) AS TotalNumberOfDoors
FROM VehicleDetails
INNER JOIN Makes ON VehicleDetails.MakeID = Makes.MakeID
GROUP BY Makes.Make
HAVING Makes.Make = 'Ford';
