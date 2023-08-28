n = int(input())

cont = total = totalC = totalR = totalS = perC = perR = perS = 0
while cont < n:
    num, tipo = input().split()
    num = int(num)
    if 1 <= num <= 15:
        cont += 1
        total += num
    if tipo in 'Cc':
        totalC += num
    elif tipo in 'Rr':
        totalR += num
    elif tipo in 'Ss':
        totalS += num

    perC = (totalC * 100) / total
    perR = (totalR * 100) / total
    perS = (totalS * 100) / total

print(f'Total: {total} cobaias') 
print(f'Total de coelhos: {totalC}') 
print(f'Total de ratos: {totalR}') 
print(f'Total de sapos: {totalS}') 
print(f'Percentual de coelhos: {perC:.2f} %')
print(f'Percentual de ratos: {perR:.2f} %')
print(f'Percentual de sapos: {perS:.2f} %')
