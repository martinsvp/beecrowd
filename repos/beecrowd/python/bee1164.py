n = int(input())

for i in range(n):
    divisores = []

    x = int(input())
    for j in range(1, x):
        if x % j == 0:
            divisores.append(j)
    
    if sum(divisores) == x:
        print(f'{x} eh perfeito')
    else:
        print(f'{x} nao eh perfeito')
