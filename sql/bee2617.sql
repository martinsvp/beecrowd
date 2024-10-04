SELECT PD.name, PV.name
FROM products PD
INNER JOIN providers PV ON PD.id_providers = PV.id
WHERE PV.name = 'Ajax SA'