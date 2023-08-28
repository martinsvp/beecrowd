SELECT PD.name, PV.name
FROM products AS PD
INNER JOIN providers AS PV ON PV.id = PD.id_providers AND PD.id_categories = 6