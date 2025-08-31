# Problem 042 – Top 3 Manufacturers by Number of Models

## 🧠 Problem Description

Retrieve the **top 3 vehicle makes** that produce the **highest number of models**. This query helps identify the most diverse manufacturers in terms of product offerings.

## 📊 Tables Used

- `Makes`: Contains make names with `MakeID` as primary key
- `MakeModels`: Contains model records with `MakeID` as foreign key

## 🔗 Query Logic

- Join `Makes` with `MakeModels` using `MakeID`
- Group results by `Make`
- Use `COUNT(*)` to calculate the number of models per make
- Use `TOP 3` to limit results to the highest three
- Sort results by model count in descending order

## 🧾 SQL Query

```sql
SELECT TOP 3 Makes.Make,
              COUNT(*) AS NumberOfModels
FROM Makes
INNER JOIN MakeModels ON Makes.MakeID = MakeModels.MakeID
GROUP BY Makes.Make
ORDER BY NumberOfModels DESC;
