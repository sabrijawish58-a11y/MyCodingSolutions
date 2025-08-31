# Problem 033 – Count of Vehicles with Engine Capacity Above Average

## 🧠 Problem Description

Calculate the total number of vehicles where the **engine capacity (`Engine_CC`)** is **greater than the average** engine capacity across all vehicles. This query helps quantify how many vehicles are above the performance baseline.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `Engine_CC`

## 🔗 Query Logic

- Use a subquery to calculate the average `Engine_CC`
- Filter records where `Engine_CC > AVG(Engine_CC)`
- Count the number of matching records

## 🧾 SQL Query

```sql
SELECT COUNT(*) AS NumberOfVehiclesAboveAverageEngineCC
FROM VehicleDetails
WHERE Engine_CC > (
    SELECT AVG(Engine_CC)
    FROM VehicleDetails
);
