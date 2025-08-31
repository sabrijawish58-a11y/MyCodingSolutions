select VehicleDetails.Vehicle_Display_Name,VehicleDetails.NumDoors ,
DoorDescribtion = Case 
when VehicleDetails.NumDoors = 0 Then 'No Doors'
when VehicleDetails.NumDoors = 1 Then 'One Door'
when VehicleDetails.NumDoors = 2 Then 'Two Doors'
when VehicleDetails.NumDoors = 3 Then 'Three Doors'
when VehicleDetails.NumDoors = 4 Then 'Four Doors'
when VehicleDetails.NumDoors = 5 Then 'Five Doors'
when VehicleDetails.NumDoors = 6 Then 'Six Doors'
when VehicleDetails.NumDoors = 8 Then 'Eight Doors'
when VehicleDetails.NumDoors is Null Then 'Not Soecified'
Else 'Unknown'
End
from VehicleDetails