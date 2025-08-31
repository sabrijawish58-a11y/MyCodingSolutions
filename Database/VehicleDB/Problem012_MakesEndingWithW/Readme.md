# Problem 012 – Makes Ending with 'W'

## 🧠 Problem Description

Retrieve all vehicle **makes** whose names end with the letter **'W'**. This query is useful for filtering manufacturers alphabetically or performing targeted string analysis.

## 📊 Tables Used

- `Makes`: Contains make names with `MakeID` as primary key

## 🔗 Query Logic

- Use the `LIKE` operator to match make names that end with 'W'
- Select only the `Make` column

## 🧾 SQL Query

```sql
SELECT Makes.Make
FROM Makes
WHERE Makes.Make LIKE '%W';
