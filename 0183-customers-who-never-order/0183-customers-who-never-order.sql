# Write your MySQL query statement below
SELECT Name as Customers
FROM Customers LEFT JOIN Orders
ON Customers.id= Orders.customerId
WHERE Orders.CustomerID IS NULL