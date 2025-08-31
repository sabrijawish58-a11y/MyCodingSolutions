# Problem 002 – Makes with Over 12,000 Vehicles (1950–2000)

## 🧠 Problem Description

Retrieve all vehicle makes that have manufactured **more than 12,000 vehicles** between the years **1950 and 2000**. Results should be grouped by make and sorted by the number of vehicles in **descending order**.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `MakeID` and `Year`
- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Join & Filter Logic

- Join `VehicleDetails` with `Makes` on `MakeID`
- Filter records where `Year` is between 1950 and 2000
- Group by `Make` and count vehicles
- Use `HAVING` clause to include only makes with count > 12,000
- Sort by count descending

## 🧾 SQL Query

```sql
SELECT Makes.Make AS Maker, COUNT(*) AS NumOfVehicle
FROM VehicleDetails
JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
WHERE VehicleDetails.Year BETWEEN 1950 AND 2000
GROUP BY Makes.Make
HAVING COUNT(*) > 12000
ORDER BY NumOfVehicle DESC;
