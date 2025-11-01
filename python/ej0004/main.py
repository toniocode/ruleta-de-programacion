# Haz un programa que calcule la serie de fibonacci 
# hasta un término n con recursividad

# 0 1 1 2 3 5 8 13 ...

def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)
    
print(f"La serie en el término 6 vale: {fibonacci(6)}")
print(f"La serie en el término 2 vale: {fibonacci(2)}")
print(f"La serie en el término 20 vale: {fibonacci(20)}")