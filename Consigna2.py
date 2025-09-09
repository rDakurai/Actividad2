import random
numeros = []
pares = 0
impares = 0
for i in range(500):
    n = random.randint(50, 100)
    print("Numero generado", i + 1, ":", n)
    numeros.append(n)
    if n % 2 == 0:
        pares += 1
    else:
        impares += 1
print("Cantidad de números pares:", pares)
print("Cantidad de números impares:", impares)
