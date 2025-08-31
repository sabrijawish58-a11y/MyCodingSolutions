# Problem 001 – Count Vehicles by Make (1950–2000)

## 🧠 Problem Description

Retrieve the number of vehicles manufactured between **1950 and 2000**, grouped by **make**, and sorted by the number of vehicles in **descending order**.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `MakeID` and `Year`
- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Join Logic

- Join `VehicleDetails` with `Makes` on `MakeID`
- Filter records where `Year` is between 1950 and 2000
- Group by `Make` and count vehicles
- Sort by count descending

## 🧾 SQL Query

```sql
SELECT Makes.Make AS Maker, COUNT(*) AS NumOfVehicle
FROM VehicleDetails
JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
WHERE VehicleDetails.Year BETWEEN 1950 AND 2000
GROUP BY Makes.Make
ORDER BY NumOfVehicle DESC;
