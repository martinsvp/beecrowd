WITH ranked_cities AS (
    SELECT 
        city_name, 
        population,
        ROW_NUMBER() OVER (ORDER BY population DESC) AS desc_rank,
        ROW_NUMBER() OVER (ORDER BY population ASC) AS asc_rank
    FROM cities
)
SELECT city_name, population
FROM ranked_cities
WHERE desc_rank = 2 OR asc_rank = 2
ORDER BY population DESC;