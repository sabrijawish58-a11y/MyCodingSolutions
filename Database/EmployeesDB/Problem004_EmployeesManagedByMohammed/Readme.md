# Problem 004 – Employees Managed by 'Mohammed'

## 🧠 Problem Description

Retrieve all employees who are **managed by 'Mohammed'**, and display:
- Employee's `Name`
- `ManagerID`
- `Salary`
- Manager's `Name` (as `ManagerName`)

This query uses a **self-join** to relate employees to their managers and filters results to only include those managed by `'Mohammed'`.

## 📊 Tables Used

- `Employees`: Contains employee records including `EmployeeID`, `Name`, `ManagerID`, and `Salary`

## 🔗 Query Logic

- Perform an `INNER JOIN` between `Employees` and itself (aliased as `Managers`)
- Join condition: `Employees.ManagerID = Managers.EmployeeID`
- Filter using `WHERE Managers.Name = 'Mohammed'`

## 🧾 SQL Query

```sql
SELECT Employees.Name,
       Employees.ManagerID,
       Employees.Salary,
       Managers.Name AS ManagerName
FROM Employees
INNER JOIN Employees AS Managers
    ON Employees.ManagerID = Managers.EmployeeID
WHERE Managers.Name = 'Mohammed';
