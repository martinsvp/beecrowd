sal = float(input())

if 0 <= sal <= 400:
    num_r = 0.15
    new_sal = sal + (sal*num_r)
    r = sal * num_r
elif 400 < sal <= 800:
    num_r = 0.12
    new_sal = sal + (sal*num_r)
    r = sal * num_r
elif 800 < sal <= 1200:
    num_r = 0.1
    new_sal = sal + (sal*num_r)
    r = sal * num_r
elif 1200 < sal <= 2000:
    num_r = 0.07
    new_sal = sal + (sal*num_r)
    r = sal * num_r
else:
    num_r = 0.04
    new_sal = sal + (sal*num_r)
    r = sal * num_r

print(f'Novo salario: {new_sal:.2f}')
print(f'Reajuste ganho: {r:.2f}')
print(f'Em percentual: {num_r*100:.0f} %')
