# Problem 021 – Vehicles with Engine > 3L and 2 Doors

## 🧠 Problem Description

Retrieve all vehicle records where:
- The **engine size is greater than 3 liters**
- The **number of doors is exactly 2**

This query helps identify vehicles with high engine capacity and compact design, often associated with sports or performance models.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `Engine_liter_Display` and `NumDoors`

## 🔗 Query Logic

- Filter records where `Engine_liter_Display > 3`
- AND `NumDoors = 2`
- Select all columns from `VehicleDetails`

## 🧾 SQL Query

```sql
SELECT *
FROM VehicleDetails
WHERE VehicleDetails.Engine_liter_Display > 3
  AND VehicleDetails.NumDoors = 2;
