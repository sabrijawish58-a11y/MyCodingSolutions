select Makes.Make , NumOfVehicles = count(*), TotalVehicles = (select Count(*) from VehicleDetails) from VehicleDetails inner join Makes on
Makes.MakeID = VehicleDetails.MakeID where VehicleDetails.Year between 1950 and 2000
group by Makes.Make
order by NumOfVehicles desc