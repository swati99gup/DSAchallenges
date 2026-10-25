# Write your MySQL query statement below
(select name as results from Users u join MovieRating m on u.user_id=m.user_id group by u.user_id ,u.name order by count(m.movie_id) desc ,u.name asc limit 1)
union all
(select title as results from Movies x join MovieRating m on x.movie_id = m.movie_id where  m.created_at >= '2020-02-01'
   AND m.created_at < '2020-03-01' group by x.movie_id,x.title order by avg(rating) desc,x.title asc limit 1)
