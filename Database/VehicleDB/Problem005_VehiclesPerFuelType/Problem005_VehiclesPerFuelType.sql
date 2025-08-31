select Makes.Make , FuelTypes.FuelTypeName ,NumOfVehicles = COUNT(*) from VehicleDetails inner join
Makes on Makes.MakeID = VehicleDetails.MakeID inner join FuelTypes on VehicleDetails.FuelTypeID = 
FuelTypes.FuelTypeID
where VehicleDetails.Year between 1950 and 2000
group by Makes.Make , FuelTypes.FuelTypeName
order by Makes.Make 