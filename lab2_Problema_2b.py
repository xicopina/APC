#coding=utf-8
print('Qual o comprimento do lado 1?')
lado1 = float(input(' '))

while lado1 < 0:
          print('Valor inválido! Qual o comprimento do lado 1?')
          lado1 = float(input(' '))
          
print('Qual o comprimento do lado 2?')
lado2 = float(input(' '))

while lado2 < 0:
          print('Valor inválido! Qual o comprimento do lado 2?')
          lado2 = float(input(' '))

print('Qual o comprimento do lado 3?')
lado3 = float(input(' '))

while lado3 < 0:
          print('Valor inválido! Qual o comprimento do lado 3?')
          lado3 = float(input(' '))

compara = bool((lado1+lado2)>lado3)and((lado2+lado3)>lado1)and((lado3+lado1)>lado2)

if compara:
    if (lado1==lado2)and(lado2==lado3):
        print('Trata-se de um triângulo equilátero.')
    elif (lado1==lado2)or(lado2==lado3)or(lado1==lado3):
        print('Trata-se de um triângulo isóceles.')
    else:
        print('Trata-se de um triângulo escaleno.')
else:
    print('Não existe triângulo com tais dimensões.')


