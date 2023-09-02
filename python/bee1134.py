a = g = d = 0
while True:
    while True:    
        opc = int(input())
        if 1 <= opc <= 4:
            break
    if opc == 4:
        break
    
    if opc == 1:
        a += 1
    elif opc == 2:
        g += 1
    elif opc == 3:
        d += 1
print('MUITO OBRIGADO')
print(f'Alcool: {a}')
print(f'Gasolina: {g}')
print(f'Diesel: {d}')
