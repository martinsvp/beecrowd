dia_inicio = int(input().split()[1])
hi, mi, si = map(int, input().split(' : '))
dia_final = int(input().split()[1])
hf, mf, sf = map(int, input().split(' : '))

hi = hi*3600
hf = hf*3600
mi = mi*60
mf = mf*60

dia_segundos = (dia_final - dia_inicio)*86400

inicio_segundos = hi + mi + si
final_segundos = hf + mf + sf

total_segundos = (dia_segundos - inicio_segundos) + final_segundos

dias = total_segundos // 86400
r = total_segundos % 86400
horas = r // 3600
r = r % 3600
minutos = r // 60
r = r % 60
segundos = r

print(f'{dias} dia(s)')
print(f'{horas} hora(s)')
print(f'{minutos} minuto(s)')
print(f'{segundos} segundo(s)')
