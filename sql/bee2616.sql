SELECT CT.id, CT.name
FROM customers CT
LEFT JOIN locations LC ON CT.id = LC.id_customers
WHERE LC.id_customers IS NULL