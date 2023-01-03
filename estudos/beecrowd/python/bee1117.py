c = soma = media = 0
while True:
    if c == 2:
        break    
    nota = float(input())
    if nota < 0 or nota > 10:
        print('nota invalida')
    else:
        soma += nota
        c += 1
media = soma / 2
print(f'media = {media:.2f}')
