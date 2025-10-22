# Pide al usuario una frase y muestra cuántas palabras 
# únicas tiene

import string

frase = input("Frase: ").lower()

# Forma 1
for c in string.punctuation:
    frase = frase.replace(c, " ")

# Forma 2
# frase = "".join([c if c not in string.punctuation else " " for c in frase])

palabras_unicas = set(frase.split())

print(f"Palabras únicas: {len(palabras_unicas)}")
print(f"Lista: {palabras_unicas}")