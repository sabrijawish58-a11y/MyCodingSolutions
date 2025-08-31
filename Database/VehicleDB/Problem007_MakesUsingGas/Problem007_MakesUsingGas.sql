SELECT distinct Makes.Make, FuelTypes.FuelTypeName 
FROM   VehicleDetails INNER JOIN 
             FuelTypes ON VehicleDetails.FuelTypeID = FuelTypes.FuelTypeID 
             inner join Makes on Makes.MakeID = VehicleDetails.MakeID
 
WHERE ( FuelTypes.FuelTypeName = N'GAS' )
order by Makes.Make