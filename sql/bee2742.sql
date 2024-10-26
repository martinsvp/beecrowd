SELECT lr.name, ROUND((lr.omega * 1.618), 3) AS "Fator N"
FROM life_registry lr
JOIN dimensions d ON d.id = lr.dimensions_id
WHERE d.name IN ('C774', 'C875') AND lr.name LIKE 'Richard%'
ORDER BY lr.omega;