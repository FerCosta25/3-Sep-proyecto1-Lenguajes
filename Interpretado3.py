import random as rd

sucursales = []
ventas = []
suma = 0

for i in range(25):
    sucursales.append(f"Sucursal {i+1}")
    v = rd.randint(1000, 5000)
    ventas.append(v)
    suma += v

promedio = suma / 25

print("Promedio de ventas:", promedio)
print("Sucursales por encima del promedio:")

for i in range(25):
    if ventas[i] > promedio:
        print(sucursales[i], "-", ventas[i])