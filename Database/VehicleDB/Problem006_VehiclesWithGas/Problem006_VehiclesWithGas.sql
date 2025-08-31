SELECT VehicleDetails.*, FuelTypes.FuelTypeName 
FROM   VehicleDetails INNER JOIN 
             FuelTypes ON VehicleDetails.FuelTypeID = FuelTypes.FuelTypeID 
 WHERE ( FuelTypes.FuelTypeName = N'GAS' )