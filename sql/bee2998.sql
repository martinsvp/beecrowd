WITH accumulated_profit AS (
	SELECT
		c.name,
		c.investment,
		o.month,
		SUM(o.profit) OVER (PARTITION BY c.name ORDER BY o.month) AS accumulated_value
	FROM clients c
	JOIN operations o ON c.id = o.client_id 
),
payback AS (
	SELECT
		name,
		investment,
		month AS month_of_payback,
		accumulated_value - investment AS return
	FROM accumulated_profit
	WHERE accumulated_value >= investment
	ORDER BY month
)

SELECT
   	name,
    investment,
    MIN(month_of_payback) AS month_of_payback,
    MIN(return) AS return
FROM payback
GROUP BY name, investment
ORDER BY return DESC;