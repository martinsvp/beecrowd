soma = pos = cont = 0
while True:
    num = float(input())
    if num != 0:
        if num > 0:
            pos += 1
            soma += num
        cont += 1
    if cont == 6:
        break
print(f'{pos} valores positivos')
print(f'{soma/pos:.1f}')
