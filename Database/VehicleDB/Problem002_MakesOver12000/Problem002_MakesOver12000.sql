select Makes.Make as Maker,NumOfVehicle = count(*) from VehicleDetails join Makes on 
Makes.MakeID = VehicleDetails.MakeID
where VehicleDetails.year between 1950 and 2000
group by Makes.Make
having count(*)>12000
order by NumOfVehicle desc
