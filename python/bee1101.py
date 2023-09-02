while True:
    m, n = map(int, input().split())
    soma = 0
    if m <= 0 or n <= 0:
        break
    if m <= n:
        for c in range(m, n+1):
            print(c, end=' ')
            soma += c
        print(f'Sum={soma}')
    else:
        for c in range(n, m+1):
            print(c, end=' ')
            soma += c
        print(f'Sum={soma}')
