#include <stdio.h>
#include <stdlib.h>


int main()
{
    float lado1, lado2, lado3;
    char compara, isoceles, equilatero, escaleno;

printf("Qual o comprimento do lado 1 (m)?\n");
scanf("%f", &lado1);

while (lado1 < 0 )                             //Confere valor válido para lado 1
        {
        printf("Valor inv%clido!\nQual o comprimento do lado 1 (m)?\n",160);
        scanf("%f", &lado1);
        }

printf("Qual o comprimento do lado 2 (m)?\n");
scanf("%f", &lado2);

while (lado2 < 0 )                             //Confere valor válido para lado 2
        {
        printf("Valor inv%clido!\nQual o comprimento do lado 2 (m)?\n",160);
        scanf("%f", &lado2);
        }

printf("Qual o comprimento do lado 3 (m)?\n");
scanf("%f", &lado3);

while (lado3 < 0 )                             //Confere valor válido para lado 3
        {
        printf("Valor inv%clido!\nQual o comprimento do lado 3 (m)?\n",160);
        scanf("%f", &lado3);
        }

compara = ((lado1+lado2)>lado3)&&((lado2+lado3)>lado1)&&((lado1+lado3)>lado2); //Valor será verdadeiro se as somas de dois lados forem maiores que o valor do lado restante.

if (compara) {

    printf("\nExiste tri%cngulo com tais lados.\n",131);

    if((lado1==lado2)&&(lado2==lado3)){                                             //Comparação para equilátero
            printf("%c um tri%cngulo equil%ctero.\n\n",144,131,160);
    }
    else if((lado1==lado2)||(lado2==lado3)||(lado3==lado1)){                        //Comparação para isóceles
            printf("%c um tri%cngulo is%celes.\n\n",144,131,162);
    }
    else {
    printf("%c um tri%cngulo escaleno.\n\n",144,131);
    }

}
else  {
    printf("N%co  tri%cngulo com os valores de comprimento informados.\n\n",198,131);
}
return 0;
}

