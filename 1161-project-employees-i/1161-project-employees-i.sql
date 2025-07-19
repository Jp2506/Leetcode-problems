# Write your MySQL query statement below

SELECT p.project_id,round(sum(e.experience_years)/count(experience_years),2) as average_years
from Project p inner join Employee e
on p.employee_id=e.employee_id
group by p.project_id;

