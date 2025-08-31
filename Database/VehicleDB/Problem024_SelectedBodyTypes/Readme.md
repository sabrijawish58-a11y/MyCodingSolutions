# Problem 024 – Vehicles with Body Type: Coupe, Hatchback, or Sedan

## 🧠 Problem Description

Retrieve all vehicle records where the **body type** is one of the following:
- `Coupe`
- `Hatchback`
- `Sedan`

This query helps filter vehicles based on popular compact and passenger-oriented body styles.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `BodyID`
- `Bodies`: Contains body type names with `BodyID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Bodies` on `BodyID`
- Filter records where `BodyName` is in the specified list
- Select all columns from `VehicleDetails` and the corresponding `BodyName`

## 🧾 SQL Query

```sql
SELECT Bodies.BodyName,
       VehicleDetails.*
FROM VehicleDetails
INNER JOIN Bodies ON Bodies.BodyID = VehicleDetails.BodyID
WHERE Bodies.BodyName IN ('Coupe', 'Hatchback', 'Sedan');
