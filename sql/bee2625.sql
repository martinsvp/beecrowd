SELECT 
    CONCAT(SUBSTRING(NP.cpf, 1, 3), '.', 
           SUBSTRING(NP.cpf, 4, 3), '.', 
           SUBSTRING(NP.cpf, 7, 3), '-', 
           SUBSTRING(NP.cpf, 10, 2)) AS CPF
FROM natural_person NP;