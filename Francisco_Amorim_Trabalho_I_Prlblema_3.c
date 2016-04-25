#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Aluno: Francisco Borges de Pina Amorim

int main()
{

float a0, a1, a2, a3, a4, a5, x0, x1, x1d, x2d, deltax, e;
float px1=0, px2=10, px1d, px2d, C=0, deltaC, deltaCmax=1;
int n=0, nmax=1;

printf("Para uma fun%c%co polinomial do tipo\na5*x^5 + a4*x^4 + a3*x^3 + a2*x^2 + a1*x + a0\n vamos calcular o comprimento C, para um determinado intervalo [x0,x1].", 135, 198);
printf("\nDigite um valor real para a0:");
scanf("%f", &a0);
printf("\nDigite um valor real para a1: ");
scanf("%f", &a1);
printf("\nDigite um valor real para a2: ");
scanf("%f", &a2);
printf("\nDigite um valor real para a3: ");
scanf("%f", &a3);
printf("\nDigite um valor real para a4: ");
scanf("%f", &a4);
printf("\nDigite um valor real para a5: ");
scanf("%f", &a5);
printf("\nDigite um valor real para x0: ");
scanf("%f", &x0);
printf("\nDigite um valor real para x1: ");
scanf("%f", &x1);
while (x0>=x1) {
    printf("\nValores inv%clidos: Digite um valor real para x0: ",160);
    scanf("%f", &x0);
    printf("\nDigite um valor real para x1: ");
    scanf("%f", &x1);
}
printf("\nDigite um valor real para a precis%co desejada (e): ", 198);
scanf("%f", &e);

while (e<=deltaCmax){

    C=0;
    x2d=x0;
    deltax=(x1-x0)/nmax;
    printf("deltax = %f// deltaCmax = %f\n", deltax, deltaCmax);
    for (n=0; n<=nmax; n++) {

        x1d=x2d;

        px1d=a5*pow(x1d,5)+a4*pow(x1d,4)+a3*pow(x1d,3)+a2*pow(x1d,2)+a1*x1d+a0;

        x2d=x1d+deltax;

        px2d=a5*pow(x2d,5)+a4*pow(x2d,4)+a3*pow(x2d,3)+a2*pow(x2d,2)+a1*x2d+a0;

        //px1=a5*pow(x1,5)+a4*pow(x1,4)+a3*pow(x1,3)+a2*pow(x1,2)+a1*x1+a0;
        //px2=a5*pow(x2,5)+a4*pow(x2,4)+a3*pow(x2,3)+a2*pow(x2,2)+a1*x2+a0;
        deltaC=sqrt(pow(x2d-x1d,2)+pow(px2d-px1d,2));
        C=C+deltaC;
        printf("x1d %f x2d %f deltaC %f  - n %d. \n",x1d,x2d,deltaC,n);
        if (deltaCmax>deltaC) deltaCmax=deltaC;//pega o maior valor de deltaC para comparar com e.
        //if (n>150) system("PAUSE");
    }
     nmax=2*nmax;
}

printf("Valor aproximado do comprimento C: %f.\n\n", C);








/*float x1, fx1, x2, fx2, xm, fxm, raiz, e=0.1;
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

*/

return 0;
}

