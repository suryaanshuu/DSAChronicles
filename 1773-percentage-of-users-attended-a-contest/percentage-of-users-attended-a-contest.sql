select r.contest_id, 
round(count(distinct user_id)*100.00 / (select count(user_id) from Users), 2) as percentage
from Register r
group by r.contest_id
order by percentage desc, r.contest_id