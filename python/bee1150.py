x = int(input())
while True:
    z = int(input())
    if z > x:
        break
cont = soma = 0
for i in range(x, z+1):
    cont += 1
    soma += i
    if soma > z:
        break
print(cont)
