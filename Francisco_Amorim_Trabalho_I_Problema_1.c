#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Aluno: Francisco Borges de Pina Amorim

int main()
{

double Z_1_1, Z_1_2, Z_2_1, Z_2_2, teta1, teta2, Z1conv1, Z1conv2,Z2conv1, Z2conv2, saida1=0.0, saida2=0.0;
int flag=0;
char FE[2], FS[2];
char CODIGO[30]= "Codigo";


while (strcmp(CODIGO,"Z")!=0){
    printf("\nDigite um c%cdigo para indicar a operação a ser realizada.\nMULTIPLICA, DIVIDE, CONVERTE_EXPONENCIAL, CONVERTE_CARTESIANA ou Z (para sair):\n",162);
    scanf("%s", CODIGO);
    //printf("\n%s: ",CODIGO);

    if ((strcmp(CODIGO,"CONVERTE_CARTESIANA")==0)||(strcmp(CODIGO,"CONVERTE_EXPONENCIAL")==0)||(strcmp(CODIGO,"MULTIPLICA")==0)||(strcmp(CODIGO,"DIVIDE")==0)) {
        printf("\nDigite um valor real para Z_1_1: ");
        scanf("%lf", &Z_1_1);
        printf("\nDigite um valor real para Z_1_2: ");
        scanf("%lf", &Z_1_2);
        printf("\nDigite um valor real para Z_2_1: ");
        scanf("%lf", &Z_2_1);
        printf("\nDigite um valor real para Z_2_2: ");
        scanf("%lf", &Z_2_2);
        ///////printf("\nl.29 z11= %f\nz12= %f\nz21= %f\nz22= %f", Z_1_1, Z_1_2, Z_2_1, Z_2_2);

        if(strcmp(CODIGO,"CONVERTE_EXPONENCIAL")==0) {
            Z1conv1=sqrt(pow(Z_1_1,2)+pow(Z_1_2,2)); //Convertendo Z_1 de cartesiano pra polar;
            Z1conv2=atan(Z_1_2/Z_1_1);

            Z2conv1=sqrt(pow(Z_2_1,2)+pow(Z_2_2,2)); // Convertendo Z_2 de cartesiano pra polar;
            Z2conv2=atan(Z_2_2/Z_2_1);

            printf("\nFoi selecionada a opção de converter Z1 e Z2 de coordenadas cartesianas para exponenciais complexas.");
            printf("\nResultado: Z1 tem módulo %.3lf e fase %.3lf radianos.\n Z2 tem módulo %.3lf e fase %.3lf radianos.", Z1conv1, Z1conv2, Z2conv1, Z2conv2);

        }

        else if (strcmp(CODIGO,"CONVERTE_CARTESIANA")==0){
                 Z1conv1=Z_1_1*cos(Z_1_2);  // Convertendo Z_1 de de polar pra cartesiano;
                 Z1conv2=Z_1_1*sin(Z_1_2);

                 Z2conv1=Z_2_1*cos(Z_2_2); // Convertendo Z_2 de polar pra cartesiano;
                 Z2conv2=Z_2_1*sin(Z_2_2);

                 printf("\nFoi selecionada a opção de converter Z1 e Z2 de coordenadas exponenciais complexas para cartesianas.");
                 printf("\nResultado: Z1 = %.3lf + %.3lf*i.\n Z2 = %.3lf + %.3lf*i.", Z1conv1, Z1conv2, Z2conv1, Z2conv2);

                 }


        else {
            printf("\nDigite uma forma de entrada: Cartesiano(C) ou Exponencial(E): ");
            scanf("%s", FE);
            while((strcmp(FE,"C")!=0)&&(strcmp(FE,"E")!=0)) {
                printf("\nEntrada inválida! Digite uma forma de entrada: (C) ou (E): ");
                scanf("%s", FE);
            }

            printf("\nDigite uma forma de saida: Cartesiano(C) ou Exponencial(E): ");
            scanf("%s", FS);
            while((strcmp(FS,"C")!=0)&&(strcmp(FS,"E")!=0)) {
                printf("\nSaída inválida! Digite uma forma de saída: (C) ou (E): ");
                scanf("%s", FS);
            }

                    if(strcmp(FE,"C")==0) {
                    Z1conv1=sqrt(pow(Z_1_1,2)+pow(Z_1_2,2)); //Convertendo Z_1 de cartesiano para polar;
                    Z1conv2=atan(Z_1_2/Z_1_1);
                    Z2conv1=sqrt(pow(Z_2_1,2)+pow(Z_2_2,2)); // Convertendo Z_2 de cartesiano para polar;
                    Z2conv2=atan(Z_2_2/Z_2_1);
                    //printf("\nl.75 z1c1= %lf\nz1c2= %lf\nz2c1= %lf\nz2c2= %lf", Z1conv1, Z1conv2, Z2conv1, Z2conv2);
                    }
                    else{
                    Z1conv1=Z_1_1;                          // Internamente, o programa sempre irá fazer as operações utilizando variáveis exponenciais complexas.
                    Z1conv2=Z_1_2;
                    Z2conv1=Z_2_1;
                    Z2conv2=Z_2_2;
                    //printf("\nl.82 z1c1= %lf\nz1c2= %lf\nz2c1= %lf\nz2c2= %lf", Z1conv1, Z1conv2, Z2conv1, Z2conv2);
                    }

                    if (strcmp(CODIGO,"MULTIPLICA")==0){ //efetua a multiplicação - saida em exponencial complexa.
                    saida1=Z1conv1*Z2conv1;
                    saida2=Z1conv2+Z2conv2;
                    }
                    if (strcmp(CODIGO,"DIVIDE")==0){  // efetua a divisão - saida em exponencial complexa.
                    saida1=Z1conv1/Z2conv1;
                    saida2=Z1conv2-Z2conv2;
                    }

                    if(strcmp(FS,"C")==0) {
                    saida1=(cos(saida2))*saida1;  // Convertendo saida1 e saida 2 de polar pra cartesiano, caso o usuário queira tal tipo de formato de saída.
                    saida2=(sin(saida2))*saida1;

                    printf("\nFoi selecionada a opção %s para Z1 e Z2.", CODIGO);
                    printf("\nResultado, em formato de coordenadas cartesianas: %.3lf + %.3lf*i.", saida1, saida2);
                    }
                    else {
                    printf("\nFoi selecionada a opção %s para Z1 e Z2.", CODIGO);
                    printf("\nResultado, em formato de coordenadas exponenciais complexas: Modulo %.3lf, fase %.3lf radianos.", saida1, saida2);
                    }
            }

        } //fecha if que compara codigo com Z
        else if ((strcmp(CODIGO,"Z")!=0)) printf("\nFoi selecionada a opção inválida '%s'.\n", CODIGO);   // flag só terá valor igual a um se uma das operações válidas for selecionada E EXECUTADA.
    } //fecha while
return 0;
}
