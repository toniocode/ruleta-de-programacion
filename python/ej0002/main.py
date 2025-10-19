# Pide al usuario un año y determina si es bisiesto

year = int(input("Introduce un año: "))

esBisiesto = (year % 4 == 0 and year % 100 != 0) or year % 400 == 0

if esBisiesto:
    print(f"El año {year} es bisiesto.")
else:
    print(f"El año {year} no es bisiesto.")
