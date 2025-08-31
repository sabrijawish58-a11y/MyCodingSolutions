select distinct Makes.Make, DriveTypes.DriveTypeName ,NumOfVehicle = COUNT(*) from VehicleDetails
inner join Makes on Makes.MakeID = VehicleDetails.MakeID
inner join DriveTypes on DriveTypes.DriveTypeID = VehicleDetails.DriveTypeID
group by Makes.Make,DriveTypes.DriveTypeName
having COUNT(*)>10000
order by Makes.Make asc , DriveTypes.DriveTypeName desc