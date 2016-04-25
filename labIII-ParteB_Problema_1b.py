# coding=utf-8
import math

#Compatível com Python 3.4.4 Shell
#Aluno: Francisco Borges de Pina Amorim

xm=float(1)
fx1=float(1)
fx2=float(0)
e=float(0.1)


#Problema A
x1=float(0)
x2=float(2)
fxm=float(1)
while (math.fabs(x1-x2)>e)&(fxm!=0):

       xm=(x1+x2)/2
       fx1=((x1**3)-x1-1)
       fx2=((x2**3)-x2-1)
       fxm=((xm**3)-xm-1)
       if (fx1==0):
           fxm=fx1
           xm=x1
       if (fx2==0):
           fxm=fx2
           xm=x2
       if (fx1*fxm>0): #comparação de sinais entre xm e x1
           x1=xm 
       else: x2=xm
       #print ('x1 ',x1,' fx1 ', fx1,' x2 ',x2,' fx2 ', fx2,' xm ',xm,' fxm ', fxm,'\n\n')

print ('A)Valor calculado da raiz para o intervalo x=[0,2] é: ',xm,'\n')


#Problema B
x1=float(0.1)
x2=float(1.0)
fxm=float(1)
while (math.fabs(x1-x2)>e)&(fxm!=0):

       xm=(x1+x2)/2
       fx1=(x1+math.log(x1))
       fx2=(x2+math.log(x2))
       fxm=(xm+math.log(xm))
       if (fx1==0):
           fxm=fx1
           xm=x1
       if (fx2==0):
           fxm=fx2
           xm=x2
       if (fx1*fxm>0):#comparação de sinais entre xm e x1
           x1=xm 
       else: x2=xm
       #print ('x1 ',x1,' fx1 ', fx1,' x2 ',x2,' fx2 ', fx2,' xm ',xm,' fxm ', fxm,'\n\n')

print ('B)Valor calculado da raiz para o intervalo x=[0.1,1.0] é: ',xm,'\n')

#Problema C
x1=float(0)
x2=float(2)
fxm=float(1)
while (math.fabs(x1-x2)>e)&(fxm!=0):

       xm=(x1+x2)/2
       fx1=5*math.sin(x1)+x1-5
       fx2=5*math.sin(x2)+x2-5
       fxm=5*math.sin(xm)+xm-5
       if (fx1==0):
           fxm=fx1
           xm=x1
       if (fx2==0):
           fxm=fx2
           xm=x2
       if (fx1*fxm>0): #comparação de sinais entre xm e x1
           x1=xm 
       else: x2=xm
       #print ('x1 ',x1,' fx1 ', fx1,' x2 ',x2,' fx2 ', fx2,' xm ',xm,' fxm ', fxm,'\n\n')

print ('C)Valor calculado da raiz para o intervalo x=[0,2] é: ',xm,'\n')

#Problema D
x1=float(1)
x2=float(2.5)
fxm=float(1)
while (math.fabs(x1-x2)>e)&(fxm!=0):

       xm=(x1+x2)/2
       fx1=pow(x1,3)-3*x1-2
       fx2=pow(x2,3)-3*x2-2
       fxm=pow(xm,3)-3*xm-2
       if (fx1==0):
           fxm=fx1
           xm=x1
       if (fx2==0):
           fxm=fx2
           xm=x2
       if (fx1*fxm>0): #comparação de sinais entre xm e x1
           x1=xm 
       else: x2=xm
       #print ('x1 ',x1,' fx1 ', fx1,' x2 ',x2,' fx2 ', fx2,' xm ',xm,' fxm ', fxm,'\n\n')

print ('D)Valor calculado da raiz para o intervalo x=[1,2.5] é: ',xm,'\n')

#Problema E
x1=float(-1.5)
x2=float(-0.5)
fxm=float(1)
while (math.fabs(x1-x2)>e)&(fxm!=0):

       xm=(x1+x2)/2
       fx1=pow(x1,3)-2*pow(x1,2)-13*x1-10
       fx2=pow(x2,3)-2*pow(x2,2)-13*x2-10
       fxm=pow(xm,3)-2*pow(xm,2)-13*xm-10
       if (fx1==0):
           fxm=fx1
           xm=x1
       if (fx2==0):
           fxm=fx2
           xm=x2
       if (fx1*fxm>0): #comparação de sinais entre xm e x1
           x1=xm 
       else: x2=xm
       #print ('x1 ',x1,' fx1 ', fx1,' x2 ',x2,' fx2 ', fx2,' xm ',xm,' fxm ', fxm,'\n\n')

print ('E)Valor calculado da raiz para o intervalo x=[-1.5,-0.5] é: ',xm,'\n')




