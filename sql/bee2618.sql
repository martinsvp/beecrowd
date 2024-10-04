SELECT PD.name, PV.name, CT.name
FROM products PD
INNER JOIN providers PV ON PD.id_providers = PV.id
INNER JOIN categories CT ON PD.id_categories = CT.id
WHERE PV.name = 'Sansul SA' AND CT.name = 'Imported'