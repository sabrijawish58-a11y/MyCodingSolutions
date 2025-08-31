# Problem 034 – Unique Engine Capacities in Descending Order

## 🧠 Problem Description

Retrieve all **distinct engine capacities (`Engine_CC`)** from the vehicle dataset and sort them in **descending order**. This query helps explore the range and distribution of engine sizes.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `Engine_CC`

## 🔗 Query Logic

- Use `DISTINCT` to eliminate duplicate engine capacity values
- Sort the results using `ORDER BY Engine_CC DESC`

## 🧾 SQL Query

```sql
SELECT DISTINCT Engine_CC
FROM VehicleDetails
ORDER BY Engine_CC DESC;
