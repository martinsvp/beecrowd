from math import floor

n = int(input())
horas = n // 3600
minutos = (n % 3600)/60
segundos = (n % 3600) % 60
print(f'{floor(horas)}:{floor(minutos)}:{floor(segundos)}')
