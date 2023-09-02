n = int(input())
valores = ''
primeiro_termo = 0
segundo_termo = 1
valores = str(primeiro_termo) + ' ' + str(segundo_termo) + ' '
for c in range(n-2):
    termo = segundo_termo + primeiro_termo
    primeiro_termo = segundo_termo
    segundo_termo = termo
    valores += str(termo) + ' '
print(valores[:-1])
