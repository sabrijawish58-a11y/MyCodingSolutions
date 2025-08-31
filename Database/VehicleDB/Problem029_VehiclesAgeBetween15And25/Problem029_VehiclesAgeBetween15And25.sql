select * from
( 
	Select VehicleDetails.Vehicle_Display_Name, Year, Age= YEAR(GetDate()) - VehicleDetails.year
	from VehicleDetails
) R1

Where Age between 15 and 25