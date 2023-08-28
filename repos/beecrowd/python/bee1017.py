tempo_viagem = int(input())
velocidade_viagem = int(input())
distancia = velocidade_viagem * tempo_viagem
litros_gasto = distancia / 12
print(f'{litros_gasto:.3f}')
