import random
numeros = []
for i in range(10):
    n = random.randint(1, 100)
    print("Número generado", i+1, ":", n)
    numeros.append(n)
suma = sum(numeros)
promedio = suma / len(numeros)
print("La suma es:", suma)
print("El promedio es:", promedio)