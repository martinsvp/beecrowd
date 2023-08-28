n1, n2, n3, n4 = [float(x) for x in input().split(' ')]

media = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / 10
print(f'Media: {media:.1f}')

if media >= 7:
    print('Aluno aprovado.')
elif 5 <= media < 7:
    print('Aluno em exame.')
    n5 = float(input())
    print(f'Nota do exame: {n5:.1f}')
    nova_media = (media + n5) / 2
    if nova_media >= 5.0:
        print('Aluno aprovado.')
    else:
        print('Aluno reprovado.')
    print(f'Media final: {nova_media:.1f}')
elif media < 5:
    print('Aluno reprovado.')
