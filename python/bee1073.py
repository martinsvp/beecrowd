while True:
    n = int(input())
    if 5 < n < 2000:
        for c in range(1, n+1):
            if c % 2 == 0:
                print(f'{c}^2 = {c**2}')
        break
