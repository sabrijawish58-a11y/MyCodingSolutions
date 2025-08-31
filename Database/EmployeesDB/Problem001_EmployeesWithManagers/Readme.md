# Problem 001 – Employees with Their Managers

## 🧠 Problem Description

Retrieve all employees who have a **manager**, and display:
- Employee's `Name`
- `ManagerID`
- `Salary`
- Manager's `Name` (as `ManagerName`)

This query uses a **self-join** to relate each employee to their manager within the same table.

## 📊 Tables Used

- `Employees`: Contains employee records including `EmployeeID`, `Name`, `ManagerID`, and `Salary`

## 🔗 Query Logic

- Perform an `INNER JOIN` between `Employees` and itself (aliased as `Managers`)
- Join condition: `Employees.ManagerID = Managers.EmployeeID`
- Select relevant fields including the manager's name

## 🧾 SQL Query

```sql
SELECT Employees.Name,
       Employees.ManagerID,
       Employees.Salary,
       Managers.Name AS ManagerName
FROM Employees
INNER JOIN Employees AS Managers
    ON Employees.ManagerID = Managers.EmployeeID;
