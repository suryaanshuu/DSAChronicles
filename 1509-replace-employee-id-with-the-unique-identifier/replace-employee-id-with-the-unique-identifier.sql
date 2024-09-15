-- Write your PostgreSQL query statement below
select u.unique_id, e.name
from Employees e
left join EmployeeUNI u
on e.id = u.id
-- order by u.id -- This line is just for fun