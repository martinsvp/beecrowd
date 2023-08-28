while True:
    x = int(input())

    if x == 0:
        break

    txt = ''
    for c in range(1, x+1):
        txt += str(c) + ' '
    
    print(txt[:-1])