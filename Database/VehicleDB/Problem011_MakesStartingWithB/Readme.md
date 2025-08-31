# Problem 011 – Makes Starting with 'B'

## 🧠 Problem Description

Retrieve all vehicle **makes** whose names start with the letter **'B'**. This query is useful for filtering manufacturers alphabetically or performing targeted analysis.

## 📊 Tables Used

- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Query Logic

- Use the `LIKE` operator to match make names that begin with 'B'
- Select only the `Make` column

## 🧾 SQL Query

```sql
SELECT Makes.Make
FROM Makes
WHERE Makes.Make LIKE 'B%';
