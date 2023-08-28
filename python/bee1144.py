n = int(input())
v = 1
for c in range(n*2):
    print(f'{v} {v**2 + c%2} {v**3 + c%2}')
    v += c%2
