while True:
    valido = []
    while len(valido) < 2:
        n = float(input())
        if 0 <= n <= 10:
            valido.append(n)
        else:
            print('nota invalida')
    media = sum(valido) / len(valido)
    print(f'media = {media:.2f}')

    opc = 0
    while True:
        print('novo calculo (1-sim 2-nao)')
        opc = int(input())
        if opc == 1 or opc == 2:
            break
    if opc == 2:
        break
