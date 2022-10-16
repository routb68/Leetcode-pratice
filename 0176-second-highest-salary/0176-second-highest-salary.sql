# Write your MySQL query statement below
SELECT MAX(e2.salary) as SecondHighestSalary
FROM Employee e1 , Employee e2
WHERE e1.salary > e2.salary