select Bodies.BodyName, VehicleDetails.* from VehicleDetails
inner join Bodies on Bodies.BodyID = VehicleDetails.BodyID
where Bodies.BodyName like 'Sport Utility' and VehicleDetails.Year > 2000