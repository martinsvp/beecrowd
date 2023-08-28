while True:
    valor = int(input())
    print(valor)
    if 0 < valor < 1000000:
        notas = [100, 50, 20, 10, 5, 2, 1]
        for nota in notas:
            qnt_nota = int(valor / nota)
            print(f'{qnt_nota} nota(s) de R$ {nota},00')
            valor -= qnt_nota * nota
        break
