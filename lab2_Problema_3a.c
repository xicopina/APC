#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float x, y, e=0.000999, xf, yf;

printf("Qual o valor da coordenada X?\n");
scanf("%f", &x);
printf("Qual o valor da coordenada Y?\n");
scanf("%f", &y);

//Para X < 0
if (x<0.001){
    yf = 0;
    if (fabs(y-yf)<e){
        printf("O par de coordenadas fornecido pertence %c curva", 133);
    }
    else {
        printf("O par de coordenadas fornecido N%cO pertence %c curva.", 199, 133);
    }
}
//Para X >=0 E X < 3
if (x>=0.001 && x<3){
    yf = (1/3.0)*x;
    xf = (3.0*y);
    if (fabs(y-yf)<e && fabs(x-xf)<e){
        printf("O par de coordenadas fornecido pertence %c curva.", 133);
    }
    else {
        printf("O par de coordenadas fornecido N%cO pertence %c curva.", 199, 133);
    }
}
//Para X >=3 E X <= 6
if (x>=3 && x<=6.001){
    yf = 2-(1/3.0)*x;
    xf = (6 - 3.0*y);
    if ((fabs(y-yf)<e) && (fabs(x-xf)<e)){
        printf("O par de coordenadas fornecido pertence %c curva.");
    }
    else {
        printf("O par de coordenadas fornecido N%cO pertence %c curva.", 199, 133);
    }
}
//Para X > 6
if (x>6.001){
    yf = 0;
    if (fabs(y-yf)<e){
        printf("O par de coordenadas fornecido pertence %c curva.", 133);
    }
    else {
        printf("O par de coordenadas fornecido N%cO pertence %c curva.", 199, 133);
    }
}

return 0;
}

