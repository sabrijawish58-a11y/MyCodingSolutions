SELECT Makes.Make,
Sum(VehicleDetails.NumDoors) AS TotalNumberOfDoors FROM VehicleDetails
INNER JOIN Makes ON VehicleDetails.MakeID = Makes.MakeID 
Group by Make
Having Make='Ford' 