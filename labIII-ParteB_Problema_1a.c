#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Aluno: Francisco Borges de Pina Amorim

int main()
{
float x1, fx1, x2, fx2, xm, fxm, raiz, e=0.1;
int n=0;
//termo=1;
//termoAnt=0;
//time_t inicio, fim;
//time(&inicio);

//resolução para a letra A
x1=0.0;
x2=2.0;
fxm=1;
while ((fabs(x1-x2)>e)&&(fxm!=0)){

       xm=(x1+x2)/2;
       fx1=(pow(x1,3)-x1-1);
       fx2=(pow(x2,3)-x2-1);
       fxm=(pow(xm,3)-xm-1);
       if (fx1==0) {fxm=fx1; xm=x1;}
       if (fx2==0) {fxm=fx2; xm=x2;}
       if (fx1*fxm>0) x1=xm;//comparação de sinais entre xm e x1
       else x2=xm;

       printf("x1 %f/ fx1 %f/ x2 %f/ fx2 %f/ xm %f/ fxm %f \n\n", x1, fx1, x2, fx2, xm, fxm);

}
printf("a)Valor aproximado da raiz presente no intervalo x=[0,2] %c %f.\n\n",130, xm);

//resolução para a letra B
x1=0.1;
x2=1.0;
fxm=1;
while ((fabs(x1-x2)>e)&&(fxm!=0)){

       xm=(x1+x2)/2;
       fx1=(x1+log(x1));
       fx2=(x2+log(x2));
       fxm=(xm+log(xm));
       if (fx1==0) {fxm=fx1; xm=x1;}
       if (fx2==0) {fxm=fx2; xm=x2;}
       if (fx1*fxm>0) x1=xm;//comparação de sinais entre xm e x1
       else x2=xm;

       //printf("x1 %f/ fx1 %f/ x2 %f/ fx2 %f/ xm %f/ fxm %f\n\n", x1, fx1, x2, fx2, xm, fxm);


}
printf("b)Valor aproximado da raiz presente no intervalo x=[0.1,1.0] %c %f.\n\n",130, xm);

//resolução para a letra C
x1=0.0;
x2=2.0;
fxm=1;
while ((fabs(x1-x2)>e)&&(fxm!=0)){

       xm=(x1+x2)/2;
       fx1=5*sin(x1)+x1-5;
       fx2=5*sin(x2)+x2-5;
       fxm=5*sin(xm)+xm-5;
       if (fx1==0) {fxm=fx1; xm=x1;}
       if (fx2==0) {fxm=fx2; xm=x2;}
       if (fx1*fxm>0) x1=xm;//comparação de sinais entre xm e x1
       else x2=xm;

       //printf("x1 %f/ fx1 %f/ x2 %f/ fx2 %f/ xm %f/ fxm %f\n\n", x1, fx1, x2, fx2, xm, fxm);

}
printf("c)Valor aproximado da raiz presente no intervalo x=[0,2] %c %f.\n\n",130, xm);

//resolução para a letra D
x1=1.0;
x2=2.5;
fxm=1;
while ((fabs(x1-x2)>e)&&(fxm!=0)){

       xm=(x1+x2)/2;
       fx1=pow(x1,3)-3*x1-2;
       fx2=pow(x2,3)-3*x2-2;
       fxm=pow(xm,3)-3*xm-2;
       if (fx1==0) {fxm=fx1; xm=x1;}
       if (fx2==0) {fxm=fx2; xm=x2;}
       if (fx1*fxm>0) x1=xm;//comparação de sinais entre xm e x1
       else x2=xm;

       //printf("x1 %f/ fx1 %f/ x2 %f/ fx2 %f/ xm %f/ fxm %f\n\n", x1, fx1, x2, fx2, xm, fxm);

}
printf("D)Valor aproximado da raiz presente no intervalo x=[1,2.5] %c %f.\n\n",130, xm);

//resolução para a letra E
x1=-1.5;
x2=-0.5;
fxm=1;
while ((fabs(x1-x2)>e)&&(fxm!=0)){

       xm=(x1+x2)/2;
       fx1=pow(x1,3)-2*pow(x1,2)-13*x1-10;
       fx2=pow(x2,3)-2*pow(x2,2)-13*x2-10;
       fxm=pow(xm,3)-2*pow(xm,2)-13*xm-10;
       if (fx1==0) {fxm=fx1; xm=x1;}
       if (fx2==0) {fxm=fx2; xm=x2;}
       if (fx1*fxm>0) x1=xm;//comparação de sinais entre xm e x1
       else x2=xm;

       //printf("x1 %f/ fx1 %f/ x2 %f/ fx2 %f/ xm %f/ fxm %f\n\n", x1, fx1, x2, fx2, xm, fxm);

}
printf("E)Valor aproximado da raiz presente no intervalo x=[1,2.5] %c %f.\n\n",130, xm);



return 0;
}

