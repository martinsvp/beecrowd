from math import sqrt

a, b, c = [float(x) for x in input().split(' ')]

try:
    delta = b*b - 4*a*c
    r1 = (-b + sqrt(delta)) / (2*a)
    r2 = (-b - sqrt(delta)) / (2*a)

    print(f'R1 = {r1:.5f}')
    print(f'R2 = {r2:.5f}')
except:
    print('Impossivel calcular')
