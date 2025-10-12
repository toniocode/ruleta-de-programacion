# Dada una lista de números, elimina los duplicados
# manteniendo el orden original

numeros = [3, 5, 2, 8, 2, 2, 3, 1, 9]

# Forma 1
numeros_sin_duplicados1 = []
for numero in numeros:
    if numero not in numeros_sin_duplicados1:
        numeros_sin_duplicados1.append(numero)
print(f"Sin duplicados 1: {numeros_sin_duplicados1}")


# Forma 2
numeros_sin_duplicados2 = list(dict.fromkeys(numeros))
print(f"Sin duplicados 2: {numeros_sin_duplicados2}")