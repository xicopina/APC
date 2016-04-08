#include <stdio.h>
#include <stdlib.h>


int main()
{
    float nota1, nota2, nota3, media;

printf("Qual a Nota 1 (0 a 10)?\n");
scanf("%f", &nota1);

while (nota1 < 0 || nota1 > 10)                             //Confere valor válido para Nota 1
        {
        printf("Nota inválida!\nQual a Nota 1 (0 a 10)?\n");
        scanf("%f", &nota1);
        }

printf("Qual a Nota 2 (0 a 10)?\n");
scanf("%f", &nota2);

while (nota2 < 0 || nota2 > 10)                              //Confere valor válido para Nota 2
        {
        printf("Nota inválida!\nQual a Nota 2 (0 a 10)?\n");
        scanf("%f", &nota2);
        }
printf("Qual a Nota 3 (0 a 10)?\n");
scanf("%f", &nota3);

while (nota3 < 0 || nota3 > 10)                              //Confere valor válido para Nota 3
        {
        printf("Nota inválida!\nQual a Nota 3 (0 a 10)?\n");
        scanf("%f", &nota3);
        }

media= (nota1 + nota2 + nota3)/3;
if (media >= 5) {
    printf("O Aluno foi APROVADO, com média %f", media);
}
else  {
    printf("O Aluno foi REPROVADO, com média %f", media);
}
return 0;
}

