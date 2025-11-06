# Obtener cuántas vocales contiene una cadena de texto

def contarVocales(cadena):
    vocales = "aeiouáéíóú"
    return sum(1 for c in cadena.lower() if c in vocales)

print(f"Cadena 1: {contarVocales("Hola Mundo!")}")
print(f"Cadena 2: {contarVocales("¡Qué alegría!")}")