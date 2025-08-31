# Problem 035 – Top 3 Unique Engine Capacities

## 🧠 Problem Description

Retrieve the **top 3 distinct engine capacities (`Engine_CC`)** from the vehicle dataset, sorted in **descending order**. This query helps highlight the most powerful engine configurations available.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `Engine_CC`

## 🔗 Query Logic

- Use `DISTINCT` to eliminate duplicate engine capacity values
- Use `TOP 3` to limit results to the highest three values
- Sort the results using `ORDER BY Engine_CC DESC`

## 🧾 SQL Query

```sql
SELECT DISTINCT TOP 3 Engine_CC
FROM VehicleDetails
ORDER BY Engine_CC DESC;
