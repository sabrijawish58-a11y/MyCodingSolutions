# Problem 029 – Vehicles Aged Between 15 and 25 Years

## 🧠 Problem Description

Retrieve all vehicle records where:
- The **vehicle age** is between **15 and 25 years**

Display the following:
- `Vehicle_Display_Name`
- `Year` of manufacture
- A derived column `Age` calculated from the current year

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `Vehicle_Display_Name` and `Year`

## 🔗 Query Logic

- Use a subquery to calculate `Age = YEAR(GETDATE()) - Year`
- Filter results using `WHERE Age BETWEEN 15 AND 25`
- Select relevant columns

## 🧾 SQL Query

```sql
SELECT *
FROM (
    SELECT VehicleDetails.Vehicle_Display_Name,
           VehicleDetails.Year,
           YEAR(GETDATE()) - VehicleDetails.Year AS Age
    FROM VehicleDetails
) AS R1
WHERE Age BETWEEN 15 AND 25;
