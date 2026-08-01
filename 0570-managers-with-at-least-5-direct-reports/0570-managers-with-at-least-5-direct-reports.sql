SELECT Name
FROM Employee
WHERE Id IN (
    SELECT ManagerId
    FROM Employee
    WHERE ManagerId IS NOT NULL
    GROUP BY ManagerId
    HAVING COUNT(*) >= 5
);
