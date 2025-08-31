# Problem 007 – Makes That Use GAS Fuel Type

## 🧠 Problem Description

Retrieve all **distinct vehicle makes** that have manufactured vehicles using the **GAS** fuel type. The query joins the `VehicleDetails`, `FuelTypes`, and `Makes` tables to identify relevant records.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `MakeID` and `FuelTypeID`
- `FuelTypes`: Contains fuel type names with `FuelTypeID` as primary key
- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `FuelTypes` and `Makes` using foreign keys
- Filter records where `FuelTypeName = 'GAS'`
- Select distinct combinations of `Make` and `FuelTypeName`
- Sort results alphabetically by `Make`

## 🧾 SQL Query

```sql
SELECT DISTINCT Makes.Make,
                FuelTypes.FuelTypeName
FROM VehicleDetails
INNER JOIN FuelTypes ON VehicleDetails.FuelTypeID = FuelTypes.FuelTypeID
INNER JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
WHERE FuelTypes.FuelTypeName = N'GAS'
ORDER BY Makes.Make;
