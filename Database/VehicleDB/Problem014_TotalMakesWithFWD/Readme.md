# Problem 014 – Total Makes That Manufacture Vehicles with FWD

## 🧠 Problem Description

Count the number of **distinct vehicle makes** that have manufactured vehicles using the **FWD (Front-Wheel Drive)** configuration. This query helps quantify how many manufacturers adopted FWD technology.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `MakeID` and `DriveTypeID`
- `Makes`: Contains make names with `MakeID` as primary key
- `DriveTypes`: Contains drive type names with `DriveTypeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Makes` and `DriveTypes` using foreign keys
- Filter records where `DriveTypeName = 'FWD'`
- Select distinct combinations of `Make` and `DriveTypeName`
- Count the number of unique makes using FWD

## 🧾 SQL Query

```sql
SELECT COUNT(*) AS MakesWithFWD
FROM (
    SELECT DISTINCT Makes.Make, DriveTypes.DriveTypeName
    FROM VehicleDetails
    INNER JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
    INNER JOIN DriveTypes ON DriveTypes.DriveTypeID = VehicleDetails.DriveTypeID
    WHERE DriveTypes.DriveTypeName = 'FWD'
) AS R1;
