n = int(input())

for i in range(n):
    divisores = 0
    x = int(input())

    for j in range(1, x+1):
        if x % j == 0:
            divisores += 1
    
    if divisores > 2:
        print(f'{x} nao eh primo')
    else:
        print(f'{x} eh primo')
