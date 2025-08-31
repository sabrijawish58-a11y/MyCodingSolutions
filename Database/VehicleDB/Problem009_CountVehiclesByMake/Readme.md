# Problem 009 – Count Vehicles by Make (Descending Order)

## 🧠 Problem Description

Count the number of vehicles for each **make** and sort the results in **descending order** based on the number of vehicles. This query provides insight into which manufacturers have the most entries in the database.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `MakeID`
- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Makes` on `MakeID`
- Group by `Make`
- Count the number of vehicles per make
- Sort results from highest to lowest

## 🧾 SQL Query

```sql
SELECT Makes.Make,
       COUNT(*) AS NumOfVehicles
FROM VehicleDetails
INNER JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
GROUP BY Makes.Make
ORDER BY NumOfVehicles DESC;
