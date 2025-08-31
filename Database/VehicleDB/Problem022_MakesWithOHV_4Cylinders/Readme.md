# Problem 022 – Vehicles with 'OHV' Engine and 4 Cylinders

## 🧠 Problem Description

Retrieve all vehicle records where:
- The **engine description contains 'OHV'**
- The **number of cylinders equals 4**

Display the **make name** along with full vehicle details. This query helps identify manufacturers that produce compact OHV-engine vehicles.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `Engine` and `Engine_Cylinders`
- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Makes` on `MakeID`
- Filter records where:
  - `Engine LIKE '%OHV%'`
  - `Engine_Cylinders = 4`
- Select all columns from `VehicleDetails` and the corresponding `Make`

## 🧾 SQL Query

```sql
SELECT Makes.Make,
       VehicleDetails.*
FROM VehicleDetails
INNER JOIN Makes ON VehicleDetails.MakeID = Makes.MakeID
WHERE VehicleDetails.Engine LIKE '%OHV%'
  AND VehicleDetails.Engine_Cylinders = 4;
