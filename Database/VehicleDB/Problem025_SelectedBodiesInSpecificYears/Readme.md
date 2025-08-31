# Problem 025 – Vehicles with Selected Body Types in Years 2008, 2020, or 2021

## 🧠 Problem Description

Retrieve all vehicle records where:
- The **body type** is one of: `Coupe`, `Hatchback`, or `Sedan`
- The **year of manufacture** is either `2008`, `2020`, or `2021`

This query helps filter vehicles based on both design and production year.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `BodyID` and `Year`
- `Bodies`: Contains body type names with `BodyID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Bodies` on `BodyID`
- Filter records where:
  - `BodyName IN ('Coupe', 'Hatchback', 'Sedan')`
  - `Year IN (2008, 2020, 2021)`
- Select all columns from `VehicleDetails` and the corresponding `BodyName`

## 🧾 SQL Query

```sql
SELECT Bodies.BodyName,
       VehicleDetails.*
FROM VehicleDetails
INNER JOIN Bodies ON Bodies.BodyID = VehicleDetails.BodyID
WHERE Bodies.BodyName IN ('Coupe', 'Hatchback', 'Sedan')
  AND VehicleDetails.Year IN (2008, 2020, 2021);
