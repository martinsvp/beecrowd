x, y, z = map(float, input().split())

if x >= y and x >= z:
    a = x
    b = y
    c = z
if y >= x and y >= z:
    a = y
    b = x
    c = z
if z>= x and z >= y:
    a = z
    b = x
    c = y

if a < b + c:
    if a**2 == b**2 + c **2:
        print('TRIANGULO RETANGULO')
    elif a**2 > b**2 + c**2:
        print('TRIANGULO OBTUSANGULO')
    else:
        print('TRIANGULO ACUTANGULO')
    
    if a==b and b==c:
        print('TRIANGULO EQUILATERO')
    elif a==b or b==c or a==c:
        print('TRIANGULO ISOSCELES')
else:
    print('NAO FORMA TRIANGULO')
