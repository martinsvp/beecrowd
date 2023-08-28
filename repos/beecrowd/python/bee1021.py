valor = float(input())

notas = [100, 50, 20, 10, 5, 2]
moedas = [1, 0.50, 0.25, 0.10, 0.05, 0.01]

print('NOTAS:')
for nota in notas:
    quantidade_nota = int(round(valor, 2) / nota)
    print(f'{quantidade_nota} nota(s) de R$ {nota:.2f}')
    valor -= quantidade_nota * nota

print('MOEDAS:')
for moeda in moedas:
    quantidade_moeda = int(round(valor, 2) / moeda)
    print(f'{quantidade_moeda} moeda(s) de R$ {moeda:.2f}')
    valor -= quantidade_moeda * moeda
