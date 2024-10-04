SELECT CT.name, RT.rentals_date
FROM customers CT
INNER JOIN rentals RT ON CT.id = RT.id_customers
WHERE EXTRACT(MONTH FROM RT.rentals_date) = 9
AND EXTRACT(YEAR FROM RT.rentals_date) = 2016;