select Makes.Make , NumOfModels = COUNT(*) from VehicleDetails
inner join Makes on Makes.MakeID = VehicleDetails.MakeID
group by Makes.Make
Order By NumOfModels Desc

