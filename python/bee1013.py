a, b, c = [int(x) for x in input().split(' ')]
maiorAB = ((a + b) + abs(a - b)) / 2
maior = ((maiorAB + c) + abs(maiorAB - c)) / 2
print(f'{maior:.0f} eh o maior')
