SELECT CT.name
FROM customers CT
LEFT JOIN legal_person LP ON CT.id = LP.id_customers
WHERE LP.cnpj IS NOT NULL