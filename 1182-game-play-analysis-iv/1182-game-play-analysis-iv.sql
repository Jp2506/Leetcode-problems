# Write your MySQL query statement below
select round(count(t2.player_id)/count(t1.player_id),2) as fraction from
(select player_id,min(event_date) as event_date from Activity  group by player_id) t1 left join activity t2
on t1.player_id=t2.player_id and t1.event_date=DATE_SUB(t2.event_date,interval 1 day);