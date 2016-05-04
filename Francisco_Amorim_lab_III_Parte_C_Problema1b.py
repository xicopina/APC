# coding=utf-8
import math

#Compatível com Python 3.4.4 Shell
#Aluno: Francisco Borges de Pina Amorim
#Problema #1a - Lab. III - Parte C - APC

xm=float(1)
fx1=float(1)
fx2=float(0)
e=float(0.1)




a=float(0.1)
b=float(12.5)

print('Qual a precisão desejada (epslon)?:')
epslon=float(input(''))


while epslon<=(math.fabs(b-a)):
       x1=float((a+(b-a)/3))
       x2=float((b-(b-a)/3))
       fx1=float((50-2*x1)*(25-2*x1)*x1)
       fx2=float((50-2*x2)*(25-2*x2)*x2)


       if(fx1<fx2):
           a=x1
       if(fx1>fx2):
           b=x2
       if(fx1==fx2):
           a=b


       #print('x1=',x1,' fx1=',fx1,' x2 =',x2,' fx2 =',fx2,'\n')

       
print('\nValor de x para volume máximo: x= ',(b+a)/2,'cm.\nO valor aproximado do volume máximo é: V= ',(50-(b+a))*(25-(b+a))*(b+a)/2,'cm cúbicos.\n');


