# Problem 019 – Percentage of Vehicles with Unspecified Number of Doors

## 🧠 Problem Description

Calculate the **percentage** of vehicles in the database where the **number of doors is not specified**. This query helps assess the completeness of the `NumDoors` field in the `VehicleDetails` table.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including the `NumDoors` column

## 🔗 Query Logic

- Use a subquery to count vehicles where `NumDoors IS NULL`
- Use another subquery to count total vehicles
- Divide the two counts and multiply by 100 to get the percentage

## 🧾 SQL Query

```sql
SELECT 
    (CAST((SELECT COUNT(*) 
           FROM VehicleDetails 
           WHERE NumDoors IS NULL) AS FLOAT) /
     CAST((SELECT COUNT(*) 
           FROM VehicleDetails) AS FLOAT)) * 100 
    AS PercOfVehiclesWithNoSpecifiedDoors;
