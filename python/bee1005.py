notaA = round(float(input()), 1)
notaB = round(float(input()), 1)
if 0 <= notaA <= 10 and 0 <= notaB <= 10:
    media = ((notaA * 3.5) + (notaB * 7.5))/11
    print(f'MEDIA = {media:.5f}')
