# Problem 032 – Vehicles with Engine Capacity Below Average

## 🧠 Problem Description

Retrieve all vehicle records where the **engine capacity (`Engine_CC`)** is **less than the average** engine capacity across all vehicles. This query helps identify vehicles with relatively smaller engines, which may indicate fuel efficiency or compact design.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `Vehicle_Display_Name` and `Engine_CC`

## 🔗 Query Logic

- Use a subquery to calculate the average `Engine_CC`
- Filter records where `Engine_CC < AVG(Engine_CC)`
- Select the `Vehicle_Display_Name` of matching records

## 🧾 SQL Query

```sql
SELECT VehicleDetails.Vehicle_Display_Name
FROM VehicleDetails
WHERE Engine_CC < (
    SELECT AVG(Engine_CC)
    FROM VehicleDetails
);
