# Problem 043 – Maximum Number of Models Manufactured by a Single Make

## 🧠 Problem Description

Determine the **highest number of vehicle models** manufactured by any single make. This query helps identify the most prolific manufacturer in terms of model variety.

## 📊 Tables Used

- `Makes`: Contains make names with `MakeID` as primary key
- `MakeModels`: Contains model records with `MakeID` as foreign key

## 🔗 Query Logic

- Join `Makes` with `MakeModels` using `MakeID`
- Group results by `Make` and count models per make
- Use an outer query to select the maximum value from the grouped results

## 🧾 SQL Query

```sql
SELECT MAX(NumberOfModels) AS MaxNumberOfModels
FROM (
    SELECT Makes.Make,
           COUNT(*) AS NumberOfModels
    FROM Makes
    INNER JOIN MakeModels ON Makes.MakeID = MakeModels.MakeID
    GROUP BY Makes.Make
) AS R1;
