nome = str(input())
salario_fixo = float(input())
total_vendas = float(input())
salario_final = salario_fixo + (0.15 * total_vendas)
print(f'TOTAL = R$ {salario_final:.2f}')
