select distinct VehicleDetails.MakeID, Makes.Make, SubModels.SubModelName from VehicleDetails
inner join Makes on Makes.MakeID = VehicleDetails.MakeID
inner join SubModels on SubModels.SubModelID = VehicleDetails.SubModelID
where SubModels.SubModelName like 'Elite'