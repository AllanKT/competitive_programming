valor = [float(i) for i in input().split(" ")]
a, b, c = valor
pi = 3.14159
t = (a*c)/2
C = pi * (c**2)
tr = (c*(a+b))/2
q = b**2
r = a*b
print('TRIANGULO: %0.3f'%t)
print('CIRCULO: %0.3f'%C)
print('TRAPEZIO: %0.3f'%tr)
print('QUADRADO: %0.3f'%q)
print('RETANGULO: %0.3f'%r)
