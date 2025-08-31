# Problem 028 – Calculate Vehicle Age and Sort by Age Descending

## 🧠 Problem Description

Retrieve the following for each vehicle:
- `Vehicle_Display_Name`
- `Year` of manufacture
- A derived column `Age` that calculates the **vehicle's age** based on the current year

Sort the results by `Age` in **descending order** to show the oldest vehicles first.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `Vehicle_Display_Name` and `Year`

## 🔗 Query Logic

- Use the `YEAR(GETDATE()) - Year` formula to calculate age
- Select relevant columns and sort by age descending

## 🧾 SQL Query

```sql
SELECT VehicleDetails.Vehicle_Display_Name,
       VehicleDetails.Year,
       YEAR(GETDATE()) - VehicleDetails.Year AS Age
FROM VehicleDetails
ORDER BY Age DESC;
