n = int(input())

for i in range(n):
    x, y = map(int, input().split())
    cont = 1
    soma = 0
    while cont <= y:
        if x % 2 != 0:
            soma += x
            cont += 1
        x += 1
    print(soma)
