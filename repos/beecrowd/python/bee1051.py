s = float(input())

if 0 <= s <= 2000:
    print('Isento')
elif 2000 < s <= 3000:
    imp = (s - 2000) * 0.08
    print(f'R$ {imp:.2f}')
elif 3000 < s <= 4500:
    imp = ((s - 3000) * 0.18) + (1000 * 0.08)
    print(f'R$ {imp:.2f}')
elif s > 4500:
    imp = ((s - 4500) * 0.28) + (1500 * 0.18) + (1000 * 0.08)
    print(f'R$ {imp:.2f}')
