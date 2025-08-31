# Problem 036 – Vehicles with One of the Top 3 Engine Capacities

## 🧠 Problem Description

Retrieve all vehicle records where the **engine capacity (`Engine_CC`)** is among the **top 3 highest distinct values** in the dataset. This query helps identify elite vehicles with the most powerful engines.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `Vehicle_Display_Name` and `Engine_CC`

## 🔗 Query Logic

- Use a subquery to get the top 3 distinct `Engine_CC` values sorted descending
- Filter the main query using `WHERE Engine_CC IN (...)`
- Select the `Vehicle_Display_Name` of matching records

## 🧾 SQL Query

```sql
SELECT Vehicle_Display_Name
FROM VehicleDetails
WHERE Engine_CC IN (
    SELECT DISTINCT TOP 3 Engine_CC
    FROM VehicleDetails
    ORDER BY Engine_CC DESC
);
