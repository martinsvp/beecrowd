SELECT CM.name, OD.id
FROM customers CM
INNER JOIN orders OD ON CM.id = OD.id_customers
WHERE EXTRACT(MONTH FROM OD.orders_date) BETWEEN 1 AND 6