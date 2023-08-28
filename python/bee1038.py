menu = {1: 4.00, 2: 4.50, 3: 5.00, 4: 2.00, 5: 1.50}

cod, qnt = map(int, input().split())

total = menu[cod] * qnt
print(f'Total: R$ {total:.2f}')
