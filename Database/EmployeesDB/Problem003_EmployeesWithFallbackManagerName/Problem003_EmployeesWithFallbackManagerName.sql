
SELECT        Employees.Name, Employees.ManagerID, Employees.Salary, case
  WHEN Managers.Name is Null  THEN Employees.Name
    ELSE Managers.Name
    End
AS ManagerName 
FROM            Employees left JOIN 
                         Employees AS Managers ON Employees.ManagerID = Managers.EmployeeID


