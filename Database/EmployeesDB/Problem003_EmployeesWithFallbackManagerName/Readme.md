# Problem 003 – Employees with Manager Name or Self as Fallback

## 🧠 Problem Description

Retrieve all employees and display:
- Employee's `Name`
- `ManagerID`
- `Salary`
- `ManagerName`: If the employee has a manager, show the manager's name. Otherwise, show the employee's own name as a fallback.

This query ensures that every employee has a visible `ManagerName`, even if they don't have a manager assigned.

## 📊 Tables Used

- `Employees`: Contains employee records including `EmployeeID`, `Name`, `ManagerID`, and `Salary`

## 🔗 Query Logic

- Use a `LEFT JOIN` to join `Employees` with itself (aliased as `Managers`)
- Use a `CASE` expression to check if `Managers.Name` is `NULL`
  - If `NULL`, use `Employees.Name`
  - Else, use `Managers.Name`

## 🧾 SQL Query

```sql
SELECT Employees.Name,
       Employees.ManagerID,
       Employees.Salary,
       CASE 
           WHEN Managers.Name IS NULL THEN Employees.Name
           ELSE Managers.Name
       END AS ManagerName
FROM Employees
LEFT JOIN Employees AS Managers
    ON Employees.ManagerID = Managers.EmployeeID;
