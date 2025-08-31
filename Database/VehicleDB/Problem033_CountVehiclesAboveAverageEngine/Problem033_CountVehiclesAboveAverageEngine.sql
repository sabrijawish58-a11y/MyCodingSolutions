select Count(*) as NumberOfVehiclesAboveAverageEngineCC from VehicleDetails
Where Engine_CC > ( select  avg(Engine_CC) as MinEngineCC  from VehicleDetails )