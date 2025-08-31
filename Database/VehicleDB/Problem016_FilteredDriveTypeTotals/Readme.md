# Problem 016 – Filtered Vehicle Totals per Drive Type per Make

## 🧠 Problem Description

Retrieve the total number of vehicles grouped by **DriveTypeName** and **Make**, then filter the results to include only combinations where the total number of vehicles exceeds **10,000**. Results are ordered by:
- `Make` in **ascending** order
- `DriveTypeName` in **descending** order

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `MakeID` and `DriveTypeID`
- `Makes`: Contains make names with `MakeID` as primary key
- `DriveTypes`: Contains drive type names with `DriveTypeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Makes` and `DriveTypes` using foreign keys
- Group by both `Make` and `DriveTypeName`
- Count the number of vehicles per group
- Use `HAVING COUNT(*) > 10000` to filter high-volume combinations
- Sort by `Make` ascending, then `DriveTypeName` descending

## 🧾 SQL Query

```sql
SELECT DISTINCT Makes.Make,
                DriveTypes.DriveTypeName,
                COUNT(*) AS NumOfVehicle
FROM VehicleDetails
INNER JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
INNER JOIN DriveTypes ON DriveTypes.DriveTypeID = VehicleDetails.DriveTypeID
GROUP BY Makes.Make, DriveTypes.DriveTypeName
HAVING COUNT(*) > 10000
ORDER BY Makes.Make ASC, DriveTypes.DriveTypeName DESC;
