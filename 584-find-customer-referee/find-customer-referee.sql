-- Write your PostgreSQL query statement below
select c.name
from Customer c
where referee_id != 2 or referee_id is null