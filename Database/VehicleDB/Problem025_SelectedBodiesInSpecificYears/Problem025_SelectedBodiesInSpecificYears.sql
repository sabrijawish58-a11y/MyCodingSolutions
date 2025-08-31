select Bodies.BodyName, VehicleDetails.* from VehicleDetails
inner join Bodies on Bodies.BodyID = VehicleDetails.BodyID
where Bodies.BodyName in ('Coupe','Hatchback','Sedan') and
VehicleDetails.Year in (2008,2020,2021)