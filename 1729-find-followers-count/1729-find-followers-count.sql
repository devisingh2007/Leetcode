# Write your MySQL query statement below
SELECT  user_id,count(*) AS followers_count from Followers GROUP BY user_id order by user_id ;