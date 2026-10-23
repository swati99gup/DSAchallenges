# Write your MySQL query statement below
select distinct L1.num as ConsecutiveNums  from logs L1,logs L2,logs L3 where L1.id=L2.id+1 AND L2.id=L3.id+1 and L1.num=L2.num and L2.num=L3.num
