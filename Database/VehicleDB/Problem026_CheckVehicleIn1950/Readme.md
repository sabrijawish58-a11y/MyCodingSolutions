# Problem 026 – Check for Vehicle Manufactured in 1950

## 🧠 Problem Description

Return a result of `found = 1` **only if** there exists at least one vehicle manufactured in the year **1950**. This query is useful for conditional logic, validations, or existence checks in larger workflows.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including the `Year` column

## 🔗 Query Logic

- Use the `EXISTS` clause to check if any record matches `Year = 1950`
- If such a record exists, return `found = 1`

## 🧾 SQL Query

```sql
SELECT found = 1
WHERE EXISTS (
    SELECT TOP 1 *
    FROM VehicleDetails
    WHERE VehicleDetails.Year = 1950
);
