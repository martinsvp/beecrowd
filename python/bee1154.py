idades = []
while True:
    i = int(input())
    if i >= 0:
        idades.append(i)
    else:
        break

media = sum(idades) / len(idades)
print(f'{media:.2f}')
