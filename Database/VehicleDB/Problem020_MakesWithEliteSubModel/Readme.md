# Problem 020 – Makes with SubModel 'Elite'

## 🧠 Problem Description

Retrieve the `MakeID`, `Make`, and `SubModelName` for all vehicles that have a **SubModelName of 'Elite'**. This query helps identify which manufacturers produced vehicles under the 'Elite' submodel category.

## 📊 Tables Used

- `VehicleDetails`: Contains vehicle records with `MakeID` and `SubModelID`
- `Makes`: Contains make names with `MakeID` as primary key
- `SubModels`: Contains submodel names with `SubModelID` as primary key

## 🔗 Query Logic

- Join `VehicleDetails` with `Makes` and `SubModels` using foreign keys
- Filter records where `SubModelName = 'Elite'`
- Select distinct combinations of `MakeID`, `Make`, and `SubModelName`

## 🧾 SQL Query

```sql
SELECT DISTINCT VehicleDetails.MakeID,
                Makes.Make,
                SubModels.SubModelName
FROM VehicleDetails
INNER JOIN Makes ON Makes.MakeID = VehicleDetails.MakeID
INNER JOIN SubModels ON SubModels.SubModelID = VehicleDetails.SubModelID
WHERE SubModels.SubModelName LIKE 'Elite';
