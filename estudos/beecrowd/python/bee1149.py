valores = input().split()

a = int(valores[0])
ultimo_valor = len(valores) - 1
n = int(valores[ultimo_valor])
soma = 0
for i in range(n):
    soma += a + i

print(soma)