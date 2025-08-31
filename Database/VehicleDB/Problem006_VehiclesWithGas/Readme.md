# Problem 006 – Vehicles That Run on GAS

## 🧠 Problem Description

Retrieve all vehicle records where the **fuel type is GAS**. The query joins the `VehicleDetails` and `FuelTypes` tables to display full vehicle information along with the fuel type name.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `FuelTypeID`
- `FuelTypes`: Contains fuel type names with `FuelTypeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `FuelTypes` on `FuelTypeID`
- Filter records where `FuelTypeName = 'GAS'`
- Select all columns from `VehicleDetails` and the fuel type name

## 🧾 SQL Query

```sql
SELECT VehicleDetails.*,
       FuelTypes.FuelTypeName
FROM VehicleDetails
INNER JOIN FuelTypes ON VehicleDetails.FuelTypeID = FuelTypes.FuelTypeID
WHERE FuelTypes.FuelTypeName = N'GAS';
