select Makes.Make , NumOfVehicles = COUNT(*) from VehicleDetails
inner join Makes on Makes.MakeID = VehicleDetails.MakeID
group by Makes.Make
order by NumOfVehicles desc