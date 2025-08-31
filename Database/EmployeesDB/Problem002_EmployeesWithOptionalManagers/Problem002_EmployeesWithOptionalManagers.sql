
SELECT        Employees.Name, Employees.ManagerID, Employees.Salary, Managers.Name AS ManagerName
FROM            Employees Left JOIN
                         Employees AS Managers ON Employees.ManagerID = Managers.EmployeeID
select *from Employees