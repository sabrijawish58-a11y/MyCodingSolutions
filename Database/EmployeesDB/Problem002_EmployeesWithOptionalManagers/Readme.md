# Problem 002 – Employees with or without Managers

## 🧠 Problem Description

Retrieve all employees, including those **with or without a manager**, and display:
- Employee's `Name`
- `ManagerID`
- `Salary`
- Manager's `Name` (as `ManagerName`)

If the employee has no manager, the `ManagerName` should appear as `NULL`.

## 📊 Tables Used

- `Employees`: Contains employee records including `EmployeeID`, `Name`, `ManagerID`, and `Salary`

## 🔗 Query Logic

- Use a `LEFT JOIN` to join `Employees` with itself (aliased as `Managers`)
- Join condition: `Employees.ManagerID = Managers.EmployeeID`
- This ensures all employees are included, even those without managers

## 🧾 SQL Query

```sql
SELECT Employees.Name,
       Employees.ManagerID,
       Employees.Salary,
       Managers.Name AS ManagerName
FROM Employees
LEFT JOIN Employees AS Managers
    ON Employees.ManagerID = Managers.EmployeeID;
