import math
print('Qual o valor da coordenada X?')
x1 = float(input(' '))

print('Qual o valor da coordenada Y?')
y1 = float(input(' '))

if x1<0.001:
    yf=float(0.0)
    if math.fabs(y1-yf)<0.001:
        print('O par de coordenadas pertence a curva.')
    else:
        print('O par de coordenadas nao pertence a curva.')

if (x1>=0.001)and(x1<3):
    yf=float((x1/3))
    xf=float(3.0*y1)
    if (math.fabs(y1-yf)<0.001)and(math.fabs(x1-xf)<0.001):
        print('O par de coordenadas pertence a curva.')
    else:
        print('O par de coordenadas nao pertence a curva.')


if (x1>=3)and(x1<6.001):
    yf=float(2-(x1/3))
    xf=float(6-3.0*y1)
    if (math.fabs(y1-yf)<0.001)and(math.fabs(x1-xf)<0.001):
        print('O par de coordenadas pertence a curva.')
    else:
        print('O par de coordenadas nao pertence a curva.')

if (x1>6.001):
    yf=float(0.0)
    if math.fabs(y1-yf)<0.001:
        print('O par de coordenadas pertence a curva.')
    else:
        print('O par de coordenadas nao pertence a curva.')






