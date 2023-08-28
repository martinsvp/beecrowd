n = int(input())
cont = 0
while cont < n:
    num = int(input())
    if num == 0:
        print('NULL', end='')
    else:
        if num % 2 == 0:
            print('EVEN', end=' ')
        else:
            print('ODD', end=' ')
        if num > 0:
            print('POSITIVE', end='')
        else:
            print('NEGATIVE', end='')
    print()
    cont += 1
