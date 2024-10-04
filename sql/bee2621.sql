SELECT PD.name
FROM products PD
INNER JOIN providers PV ON PD.id_providers = PV.id
WHERE PV.name LIKE 'P%' AND PD.amount BETWEEN 10 AND 20