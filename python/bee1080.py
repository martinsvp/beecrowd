cont = maior = pos = 0
while cont < 100:
    n = int(input())
    if cont == 0:
        maior = n
        pos = cont + 1
    else:
        if n > maior:
            maior = n
            pos = cont + 1
    cont += 1
print(maior)
print(pos)
