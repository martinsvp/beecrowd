cont = i_win = g_win = e = v = 0

while True:
    i, g = map(int, input().split())
    cont += 1
    if i > g:
        i_win += 1
    elif i < g:
        g_win += 1
    else:
        e += 1
    
    if i_win > g_win:
        v = 'Inter venceu mais'
    elif i_win < g_win:
        v = 'Gremio venceu mais'
    else:
        v = 'Nao houve vencedor'
    
    opc = 0
    while True:
        print('Novo grenal (1-sim 2-nao)')
        opc = int(input())
        if opc == 1 or opc == 2:
            break
    if opc == 2:
        break

print(f'{cont} grenais')
print(f'Inter:{i_win}')
print(f'Gremio:{g_win}')
print(f'Empates:{e}')
print(v)
