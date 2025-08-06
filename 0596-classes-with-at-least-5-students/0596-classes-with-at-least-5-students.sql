# Write your MySQL query statement below

select class from 
(select class,count(distinct student)  as temp from Courses group by class) as class where temp>=5;