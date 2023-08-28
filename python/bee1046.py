hi, hf = map(int, input().split())

tempo = hf - hi
if tempo <= 0:
    tempo += 24

print(f'O JOGO DUROU {tempo} HORA(S)')
