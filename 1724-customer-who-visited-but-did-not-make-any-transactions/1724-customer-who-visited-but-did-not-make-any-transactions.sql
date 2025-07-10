# Write your MySQL query statement below

Select v.customer_id,count(*) as count_no_trans 
from Visits v left join Transactions t on v.visit_id=t.visit_id
where t.transaction_id is NULL
Group by v.customer_id;