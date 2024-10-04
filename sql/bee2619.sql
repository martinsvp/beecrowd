SELECT PD.name, PV.name, PD.price
FROM products PD
INNER JOIN providers PV ON PD.id_providers = PV.id
INNER JOIN categories CT ON PD.id_categories = CT.id
WHERE PD.price > 1000 AND CT.name = 'Super Luxury';