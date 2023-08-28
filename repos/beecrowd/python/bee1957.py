v = int(input())

he = ''
alg = ['A', 'B', 'C', 'D', 'E', 'F']

while (v != 0):
    c = v % 16
    if c < 10:
        he = str(c) + he
    else:
        c -= 9
        he = alg[c-1] + he
    v = int(v/16)
print(he)
