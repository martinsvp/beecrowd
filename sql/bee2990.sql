SELECT e.cpf, e.enome, dp.dnome
FROM empregados e
LEFT JOIN departamentos dp ON e.dnumero = dp.dnumero
LEFT JOIN trabalha t ON e.cpf = t.cpf_emp
WHERE t.cpf_emp IS NULL
ORDER BY e.cpf