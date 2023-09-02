inicio = int(input())
final = int(input())
soma = 0

if inicio <= final:
    for c in range(inicio+1, final):
        if c % 2 != 0:
            soma += c
else:
    for c in range(final+1, inicio):
        if c % 2 != 0:
            soma += c
print(soma)
