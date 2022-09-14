n1, n2 = map(int, input().split())

if n1 > n2 and n1 % n2 == 0:
    print('Sao Multiplos')
elif n2 > n1 and n2 % n1 == 0:
    print('Sao Multiplos')
else:
    print('Nao sao Multiplos')
