-- -- Write your PostgreSQL query statement below
-- select e1.name
-- from Employee e1
-- join 
-- (select managerId, count(managerId) as no_of_reports
-- from Employee 
-- group by managerId
-- having count(managerId) >= 5
-- ) as e2
-- on e1.id = e2.managerId

select e1.name
from Employee e1
join Employee e2
on e1.id = e2.managerId
group by e2.managerId, e1.name
having count(e2.managerId) >= 5