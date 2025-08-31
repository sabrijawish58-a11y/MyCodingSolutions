select *,Cast(R1.NumOfVehicles as float)/Cast(R1.TotalVehicles as float)*100 as Perc from
(select Makes.Make , NumOfVehicles = count(*), TotalVehicles = (select Count(*) from VehicleDetails)
from VehicleDetails inner join Makes on
Makes.MakeID = VehicleDetails.MakeID where VehicleDetails.Year between 1950 and 2000
group by Makes.Make)R1
order by R1.NumOfVehicles desc