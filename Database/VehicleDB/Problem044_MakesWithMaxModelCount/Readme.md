# Problem 044 – Manufacturers with the Highest Number of Models

## 🧠 Problem Description

Retrieve all vehicle **makes** that have manufactured the **maximum number of models**. This query accounts for the possibility that **multiple makes** may share the same highest count.

## 📊 Tables Used

- `Makes`: Contains make names with `MakeID` as primary key
- `MakeModels`: Contains model records with `MakeID` as foreign key

## 🔗 Query Logic

- Join `Makes` with `MakeModels` using `MakeID`
- Group results by `Make` and count models per make
- Use a subquery to calculate the maximum model count
- Filter using `HAVING COUNT(*) = MAX(...)` to return all matching makes

## 🧾 SQL Query

```sql
SELECT Makes.Make,
       COUNT(*) AS NumberOfModels
FROM Makes
INNER JOIN MakeModels ON Makes.MakeID = MakeModels.MakeID
GROUP BY Makes.Make
HAVING COUNT(*) = (
    SELECT MAX(NumberOfModels)
    FROM (
        SELECT MakeID,
               COUNT(*) AS NumberOfModels
        FROM MakeModels
        GROUP BY MakeID
    ) AS R1
);
