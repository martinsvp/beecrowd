codigo_peca1, total_peça1, valor_peça1 = (input()).split()
codigo_peça2, total_peça2, valor_peça2 = (input()).split()
total = (int(total_peça1)*float(valor_peça1)) + \
    (int(total_peça2)*float(valor_peça2))
print(f'VALOR A PAGAR: R$ {total:.2f}')
