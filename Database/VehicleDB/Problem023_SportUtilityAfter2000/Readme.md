# Problem 023 – Sport Utility Vehicles Manufactured After 2000

## 🧠 Problem Description

Retrieve all vehicle records where:
- The **body type is 'Sport Utility'**
- The **year of manufacture is greater than 2000**

This query helps identify modern sport utility vehicles in the dataset.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `BodyID` and `Year`
- `Bodies`: Contains body type names with `BodyID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Bodies` on `BodyID`
- Filter records where:
  - `BodyName = 'Sport Utility'`
  - `Year > 2000`
- Select all columns from `VehicleDetails` and the corresponding `BodyName`

## 🧾 SQL Query

```sql
SELECT Bodies.BodyName,
       VehicleDetails.*
FROM VehicleDetails
INNER JOIN Bodies ON Bodies.BodyID = VehicleDetails.BodyID
WHERE Bodies.BodyName = 'Sport Utility'
  AND VehicleDetails.Year > 2000;
