n = int(input())
for i in range(n):
    soma = 0
    n1, n2 = map(int, input().split())
    if n1 < n2:
        for j in range(n1+1, n2):
            if j % 2 != 0:
                soma += j
        print(soma)
    else:
        for j in range(n2+1, n1):
            if j % 2 != 0:
                soma += j
        print(soma)
