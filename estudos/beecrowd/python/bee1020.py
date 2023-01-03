idade_inicial = int(input())

idade_ano = idade_inicial // 365
resto = idade_inicial % 365
idade_mes = resto // 30
resto = resto % 30
idade_dia = resto

print(f'{idade_ano} ano(s)')
print(f'{idade_mes} mes(es)')
print(f'{idade_dia} dia(s)')
