# Problem 039 – Total Number of Doors Manufactured Per Make

## 🧠 Problem Description

Retrieve the **total number of doors** manufactured by each vehicle **make** by summing the `NumDoors` field across all vehicles. This query helps assess production scale and design preferences across manufacturers.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `MakeID` and `NumDoors`
- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Makes` using `MakeID`
- Group results by `Make`
- Use `SUM(NumDoors)` to calculate total doors per make
- Sort results by total doors in descending order

## 🧾 SQL Query

```sql
SELECT Makes.Make,
       SUM(VehicleDetails.NumDoors) AS TotalNumberOfDoors
FROM VehicleDetails
INNER JOIN Makes ON VehicleDetails.MakeID = Makes.MakeID
GROUP BY Makes.Make
ORDER BY TotalNumberOfDoors DESC;
