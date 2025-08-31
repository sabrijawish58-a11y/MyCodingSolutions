# Problem 010 – Makes with Over 20,000 Vehicles

## 🧠 Problem Description

Retrieve all vehicle **makes** that have manufactured **more than 20,000 vehicles**. The query groups vehicle records by make and filters the results using the `HAVING` clause.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `MakeID`
- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Makes` on `MakeID`
- Group by `Make`
- Count the number of vehicles per make
- Use `HAVING COUNT(*) > 20000` to filter high-volume manufacturers
- Sort results in descending order by vehicle count

## 🧾 SQL Query

```sql
SELECT Makes.Make,
       COUNT(*) AS NumOfVehicles
FROM VehicleDetails
INNER JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
GROUP BY Makes.Make
HAVING COUNT(*) > 20000
ORDER BY NumOfVehicles DESC;
