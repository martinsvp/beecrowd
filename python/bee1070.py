x = int(input())
c = 0
while c < 6:
    if x % 2 == 0:
        x += 1
    else:
        if x % 2 != 0:
            print(x)
            x += 1
            c += 1