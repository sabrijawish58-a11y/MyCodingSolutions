select MinimumEngineCC = Min(VehicleDetails.Engine_CC) ,
MaximumEngineCC = Max(VehicleDetails.Engine_CC) ,
AverageEngineCC = Avg(VehicleDetails.Engine_CC)
from VehicleDetails
