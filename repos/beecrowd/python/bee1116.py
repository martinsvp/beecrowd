n = int(input())
for c in range(n):
    x, y = map(int, input().split())
    try:
        div = x / y
        print(div)
    except ZeroDivisionError:
        print('divisao impossivel')
