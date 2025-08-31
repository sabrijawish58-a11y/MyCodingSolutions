# Problem 004 – Vehicle Count and Percentage by Make (1950–2000)

## 🧠 Problem Description

Retrieve the number of vehicles manufactured between **1950 and 2000**, grouped by **make**, and display:
- The **total number of vehicles** in the database
- The **percentage** each make contributes to that total

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `MakeID` and `Year`
- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Makes` on `MakeID`
- Filter records where `Year` is between 1950 and 2000
- Group by `Make` and count vehicles
- Use a subquery to calculate the total number of vehicles
- Calculate percentage using:  
  `(MakeCount / TotalCount) * 100`
- Sort by number of vehicles in descending order

## 🧾 SQL Query

```sql
SELECT *,
       CAST(M1.NumOfVehicles AS FLOAT) / CAST(M1.TotalVehicles AS FLOAT) * 100 AS Perc
FROM (
    SELECT Makes.Make,
           COUNT(*) AS NumOfVehicles,
           (SELECT COUNT(*) FROM VehicleDetails) AS TotalVehicles
    FROM VehicleDetails
    INNER JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
    WHERE VehicleDetails.Year BETWEEN 1950 AND 2000
    GROUP BY Makes.Make
) M1
ORDER BY M1.NumOfVehicles DESC;
