select Makes.Make ,  TotalNumberOfDoors = sum(VehicleDetails.NumDoors) from VehicleDetails
inner join Makes on Makes.MakeID = VehicleDetails.MakeID
group by Makes.Make
Order By TotalNumberOfDoors desc

 
