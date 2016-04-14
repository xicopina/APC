#coding=utf-8
print('Qual a Nota 1 (1 a 10)?')
nota1 = float(input(' '))

while nota1 < 0 or nota1 > 10:
          print('Nota inválida! Qual a Nota 1 (1 a 10)?')
          nota1 = float(input(' '))

print('Qual a Nota 2 (1 a 10)?')
nota2 = float(input(' '))

while nota2 < 0 or nota2 > 10:
          print('Nota inválida! Qual a Nota 2 (1 a 10)?')
          nota2 = float(input(' '))

print('Qual a Nota 3 (1 a 10)?')
nota3 = float(input(' '))

while nota3 < 0 or nota1 > 10:
          print('Nota inválida! Qual a Nota 3 (1 a 10)?')
          nota3 = float(input(' '))

media= float((nota1+nota2+nota3)/3)

if media < 5:
    print('Aluno aprovado com media ', media,'.')
else:
    print('Aluno reprovado com media ', media,'.')


