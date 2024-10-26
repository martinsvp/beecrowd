WITH classificacao AS (
	SELECT t.name,
	SUM(CASE
			WHEN(m.team_1 = t.id) OR
				(m.team_2 = t.id) THEN 1
			ELSE 0
		END) AS matches,
	SUM(CASE
			WHEN(m.team_1_goals > m.team_2_goals AND m.team_1 = t.id) OR
				(m.team_2_goals > m.team_1_goals AND m.team_2 = t.id) THEN 1
			ELSE 0
		END) AS victories,
	SUM(CASE
			WHEN(m.team_1_goals < m.team_2_goals AND m.team_1 = t.id) OR
				(m.team_2_goals < m.team_1_goals AND m.team_2 = t.id) THEN 1
			ELSE 0
		END) AS defeats,
	SUM(CASE
			WHEN(m.team_1_goals = m.team_2_goals AND m.team_1 = t.id) OR
				(m.team_2_goals = m.team_1_goals AND m.team_2 = t.id) THEN 1
			ELSE 0
		END) AS draws,
	SUM(CASE
			WHEN(m.team_1_goals > m.team_2_goals AND m.team_1 = t.id) OR
				(m.team_2_goals > m.team_1_goals AND m.team_2 = t.id) THEN 3
			WHEN(m.team_1_goals = m.team_2_goals) THEN 1
			ELSE 0
		END) AS score
	FROM teams t
	JOIN matches m ON t.id IN (m.team_1, m.team_2)
	GROUP BY t.name
	ORDER BY score DESC
)

SELECT name, matches, victories, defeats, draws, score 
FROM classificacao