#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Aluno: Francisco Borges de Pina Amorim
//Problema #1a - Lab. III - Parte C - APC
int main()
{

double fx1, fx2, x1, x2, a=0.1, b=12.5, epslon;

printf("Qual a precis%co desejada (epslon)?:",198);
scanf("%lf", &epslon);

while (epslon<=fabs(b-a)){
    x1=(a+(b-a)/3);
    x2=(b-(b-a)/3);
    fx1=(50-2*x1)*(25-2*x1)*x1;

    fx2=(50-2*x2)*(25-2*x2)*x2;

    if(fx1<fx2) a=x1;
    if(fx1>fx2) b=x2;
    if(fx1==fx2) a=b;

    //printf("x1= %lf - fx1= %lf- x2 = %lf - fx2 = %lf\n",x1, fx1, x2, fx2);
}
printf("\nValor de x para volume m%cximo: x= %lf cm.\n O valor aproximado do volume m%cximo é: V= %lf cm3.\n",160, (b+a)/2, 160, (50-(b+a))*(25-(b+a))*(b+a)/2);


return 0;
}

