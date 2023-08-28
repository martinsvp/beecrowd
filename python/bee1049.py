opc1 = str(input())
opc2 = str(input())
opc3 = str(input())
animal = ''

if opc1 == 'vertebrado':
    if opc2 == 'ave':
        if opc3 == 'carnivoro':
            animal = 'aguia'
        if opc3 == 'onivoro':
            animal = 'pomba'
    if opc2 == 'mamifero':
        if opc3 == 'onivoro':
            animal = 'homem'
        if opc3 == 'herbivoro':
            animal = 'vaca'
if opc1 == 'invertebrado':
    if opc2 == 'inseto':
        if opc3 == 'hematofago':
            animal = 'pulga'
        if opc3 == 'herbivoro':
            animal = 'lagarta'
    if opc2 == 'anelideo':
        if opc3 == 'hematofago':
            animal = 'sanguessuga'
        if opc3 == 'onivoro':
            animal = 'minhoca'

print(animal)
