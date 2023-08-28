while True:
    x = int(input())
    if 1 <= x <= 1000:
        for c in range(x+1):
            if c % 2 != 0:
                print(c)
        break
