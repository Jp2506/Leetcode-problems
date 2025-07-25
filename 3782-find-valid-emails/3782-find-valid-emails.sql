# Write your MySQL query statement below

#SELECT user_id,email from Users WHERE REGEXP_LIKE(email,'^[a-zA-Z0-9_]+@[a-zA-Z]+\.com$') order by user_id;

SELECT user_id, email
FROM Users
WHERE REGEXP_LIKE(email, '^[a-zA-Z0-9_]+@[a-zA-Z]+\\.com$')
ORDER BY user_id;

