select MakersWithFWD = Count(*) from (
select distinct Makes.Make,  DriveTypes.DriveTypeName from VehicleDetails
inner join Makes on Makes.MakeID = VehicleDetails.MakeID
inner join DriveTypes on DriveTypes.DriveTypeID = VehicleDetails.DriveTypeID
where DriveTypes.DriveTypeName = 'FWD'
)R1