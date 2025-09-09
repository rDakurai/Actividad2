import random
sucursales = [f"Sucursal {i+1}" for i in range(25)]
ventas = [random.randint(1000, 5000) for _ in range(25)] 
promedio = sum(ventas) / len(ventas)
print("Ventas promedio:", promedio)
print("Sucursales con ventas por encima del promedio:")
for i in range(len(sucursales)):
    if ventas[i] > promedio:
        print(sucursales[i], "con ventas de", ventas[i])