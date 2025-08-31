# Problem 031 – Vehicles with Maximum Engine Capacity

## 🧠 Problem Description

Retrieve all vehicle records where the **engine capacity (`Engine_CC`)** is equal to the **maximum value** found in the dataset. This query helps identify the most powerful vehicles in terms of engine displacement.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `Vehicle_Display_Name` and `Engine_CC`

## 🔗 Query Logic

- Use a subquery to find the maximum value of `Engine_CC`
- Filter records where `Engine_CC` equals that maximum
- Select the `Vehicle_Display_Name` of matching records

## 🧾 SQL Query

```sql
SELECT VehicleDetails.Vehicle_Display_Name
FROM VehicleDetails
WHERE Engine_CC = (
    SELECT MAX(Engine_CC)
    FROM VehicleDetails
);
