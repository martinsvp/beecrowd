n = int(input())
dentro = fora = 0

for c in range(n):
    num = int(input())

    if 10 <= num <= 20:
        dentro += 1
    else:
        fora += 1

print(f'{dentro} in')
print(f'{fora} out')
