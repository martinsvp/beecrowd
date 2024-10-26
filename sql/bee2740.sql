WITH team_names AS (  
	SELECT  
		CASE  
			WHEN ROW_NUMBER() OVER (ORDER BY position) <= 3 THEN 'Podium: ' || team  
			WHEN ROW_NUMBER() OVER (ORDER BY position DESC) = 1 THEN 'Demoted: ' || team  
			WHEN ROW_NUMBER() OVER (ORDER BY position DESC) = 2 THEN 'Demoted: ' || team  
		END AS name  
	FROM league  
)

SELECT name  
FROM team_names  
WHERE name IS NOT NULL;