import random as rd

suma = 0

for i in range(10):
    val = rd.randint(1, 100)
    suma += val

promedio = suma / 10

print("Suma:", suma)
print("Promedio:", promedio)