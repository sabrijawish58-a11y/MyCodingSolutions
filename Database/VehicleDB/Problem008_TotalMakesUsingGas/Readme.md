# Problem 008 – Total Makes That Use GAS Fuel Type

## 🧠 Problem Description

Count the number of **distinct vehicle makes** that have manufactured vehicles using the **GAS** fuel type. This query helps identify how many manufacturers adopted GAS-powered vehicles.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `MakeID` and `FuelTypeID`
- `FuelTypes`: Contains fuel type names with `FuelTypeID` as primary key
- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `FuelTypes` and `Makes` using foreign keys
- Filter records where `FuelTypeName = 'GAS'`
- Select distinct combinations of `Make` and `FuelTypeName`
- Count the number of unique makes using GAS

## 🧾 SQL Query

```sql
SELECT COUNT(*) AS TotalMakesRunWithGas
FROM (
    SELECT DISTINCT Makes.Make, FuelTypes.FuelTypeName
    FROM VehicleDetails
    INNER JOIN FuelTypes ON VehicleDetails.FuelTypeID = FuelTypes.FuelTypeID
    INNER JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
    WHERE FuelTypes.FuelTypeName = 'GAS'
) AS M;
