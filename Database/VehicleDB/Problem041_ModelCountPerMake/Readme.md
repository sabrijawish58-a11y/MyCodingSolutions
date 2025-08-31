# Problem 041 – Number of Models Per Make

## 🧠 Problem Description

Retrieve the **total number of vehicle models** produced by each **make**. This query helps assess the diversity of offerings from each manufacturer.

## 📊 Tables Used

- `Makes`: Contains make names with `MakeID` as primary key
- `MakeModels`: Contains model records with `MakeID` as foreign key

## 🔗 Query Logic

- Join `Makes` with `MakeModels` using `MakeID`
- Group results by `Make`
- Use `COUNT(*)` to calculate the number of models per make
- Sort results by model count in descending order

## 🧾 SQL Query

```sql
SELECT Makes.Make,
       COUNT(*) AS NumberOfModels
FROM Makes
INNER JOIN MakeModels ON Makes.MakeID = MakeModels.MakeID
GROUP BY Makes.Make
ORDER BY NumberOfModels DESC;
