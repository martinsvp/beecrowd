SELECT name, ROUND(salary * 0.1, 2) AS tax
FROM people
WHERE salary > 3000