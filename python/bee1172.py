vetor = []
for i in range(10):
    vetor.append(int(input()))

for pos, valor in enumerate(vetor):
    if valor == 0 or valor < 0:
        vetor[pos] = 1

for pos, valor in enumerate(vetor):
    print(f'X[{pos}] = {valor}')
