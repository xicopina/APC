#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float precofinal=0, bacon=0.6, ovo=0.7, eqjo=0.25, ehamb=1.5, qjo=0.5, alface=0.5, tomate=0.5, hamb=1.5, pao=0.5;
    char opcao;

printf("***********************************************\n");
printf("******Card%cpio da Lanchonete Morte Lenta******\n",160);
printf("***********************************************\n");
printf("Lanches:\n");
printf("(a)Completo: P%co, 2 Hamburquers, 2 Queijos, Bacon, Ovo Frito, Alface e Tomate.\n",198);
printf("(b)Econ%cmico: P%co, Hamburquer, Queijo, Alface e Tomate.\n",147,198);
printf("(c)Super-econ%cmico: P%co e Hamburquer.\n",147,198);
printf("Qual sua escolha?\n");
scanf("%c", &opcao);

switch (opcao) {
case 'a': //6,55 reais
precofinal = precofinal+bacon+ovo+eqjo+ehamb;
//printf("Valor do lanche: R$ %.2f",precofinal);

case 'b':  //3,5 reais
precofinal = precofinal+qjo+alface+tomate;
//printf("Valor do lanche: R$ %.2f",precofinal);

case 'c': //2 reais
precofinal = precofinal+pao+hamb;
//printf("Valor do lanche: R$ %.2f",precofinal);

}
printf("Valor do lanche: R$ %.2f\n",precofinal);
return 0;
}

