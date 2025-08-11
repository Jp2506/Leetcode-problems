# Write your MySQL query statement below
select max(num) as num  from (select num,count(num) as ct from Mynumbers group by num having ct=1) as ones;
