n = int(input())
for c in range(n):
    n1, n2, n3 = map(float, input().split())
    m = ((n1*2) + (n2*3) + (n3*5)) / 10
    print(f'{m:.1f}')
