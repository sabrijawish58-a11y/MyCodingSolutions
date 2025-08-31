# Problem 037 – Makes That Manufacture Vehicles with Top 3 Engine Capacities

## 🧠 Problem Description

Retrieve all **distinct vehicle makes** that manufacture vehicles with one of the **top 3 highest engine capacities (`Engine_CC`)** in the dataset. This query helps identify manufacturers associated with high-performance vehicles.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `MakeID` and `Engine_CC`
- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Query Logic

- Use a subquery to get the top 3 distinct `Engine_CC` values sorted descending
- Join `VehicleDetails` with `Makes` using `MakeID`
- Filter records where `Engine_CC` is in the top 3
- Select distinct `Make` names and sort alphabetically

## 🧾 SQL Query

```sql
SELECT DISTINCT Makes.Make
FROM VehicleDetails
INNER JOIN Makes ON VehicleDetails.MakeID = Makes.MakeID
WHERE VehicleDetails.Engine_CC IN (
    SELECT DISTINCT TOP 3 Engine_CC
    FROM VehicleDetails
    ORDER BY Engine_CC DESC
)
ORDER BY Makes.Make;
