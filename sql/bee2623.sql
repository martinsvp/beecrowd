SELECT PD.name, CT.name
FROM products PD
INNER JOIN categories CT ON CT.id = PD.id_categories
WHERE PD.amount > 100 AND CT.id IN (1, 2, 3, 6, 9)
ORDER BY CT.id