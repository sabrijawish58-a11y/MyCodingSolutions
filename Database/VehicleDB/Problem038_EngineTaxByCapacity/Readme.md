# Problem 038 – Engine Tax Calculation Based on Capacity

## 🧠 Problem Description

Generate a table of **unique engine capacities (`Engine_CC`)** and calculate the **tax** for each based on predefined ranges. This query simulates a tax policy where engine size determines the tax bracket.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `Engine_CC`

## 🔗 Query Logic

- Use a subquery to extract distinct `Engine_CC` values
- Apply a `CASE` expression to assign tax values based on engine capacity ranges:
  - `0–1000` → 100
  - `1001–2000` → 200
  - `2001–3000` → 300
  - `3001–4000` → 400
  - `4001–5000` → 500
  - `>5000` → 600

## 🧾 SQL Query

```sql
SELECT Engine_CC,
       CASE
           WHEN Engine_CC BETWEEN 0 AND 1000 THEN 100
           WHEN Engine_CC BETWEEN 1001 AND 2000 THEN 200
           WHEN Engine_CC BETWEEN 2001 AND 3000 THEN 300
           WHEN Engine_CC BETWEEN 3001 AND 4000 THEN 400
           WHEN Engine_CC BETWEEN 4001 AND 5000 THEN 500
           ELSE 600
       END AS Tax
FROM (
    SELECT DISTINCT Engine_CC
    FROM VehicleDetails
) AS R1;
