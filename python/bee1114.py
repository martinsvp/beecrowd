password = 2002

while True:
    user_password = int(input())
    if user_password == password:
        print('Acesso Permitido')
        break
    else:
        print('Senha Invalida')
