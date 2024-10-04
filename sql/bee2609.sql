SELECT CT.name, SUM(PD.amount)
FROM categories CT
INNER JOIN products PD ON CT.id = PD.id_categories
GROUP BY CT.name