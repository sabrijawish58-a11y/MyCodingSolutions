# Problem 027 – Describe Number of Doors in Words

## 🧠 Problem Description

Retrieve the following for each vehicle:
- `Vehicle_Display_Name`
- `NumDoors`
- A derived column `DoorDescription` that describes the number of doors in **words**

If `NumDoors` is `NULL`, display `'Not Specified'`. This query improves readability and helps with user-facing reports or UI rendering.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records including `Vehicle_Display_Name` and `NumDoors`

## 🔗 Query Logic

- Use a `CASE` expression to map numeric values of `NumDoors` to descriptive text
- Handle `NULL` values explicitly
- Select original columns along with the derived description

## 🧾 SQL Query

```sql
SELECT VehicleDetails.Vehicle_Display_Name,
       VehicleDetails.NumDoors,
       CASE
           WHEN VehicleDetails.NumDoors = 0 THEN 'No Doors'
           WHEN VehicleDetails.NumDoors = 1 THEN 'One Door'
           WHEN VehicleDetails.NumDoors = 2 THEN 'Two Doors'
           WHEN VehicleDetails.NumDoors = 3 THEN 'Three Doors'
           WHEN VehicleDetails.NumDoors = 4 THEN 'Four Doors'
           WHEN VehicleDetails.NumDoors = 5 THEN 'Five Doors'
           WHEN VehicleDetails.NumDoors = 6 THEN 'Six Doors'
           WHEN VehicleDetails.NumDoors = 8 THEN 'Eight Doors'
           WHEN VehicleDetails.NumDoors IS NULL THEN 'Not Specified'
           ELSE 'Unknown'
       END AS DoorDescription
FROM VehicleDetails;
