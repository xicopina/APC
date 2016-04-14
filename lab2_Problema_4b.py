# coding:utf-8

print("***********************************************\n")
print("******Cardápio da Lanchonete Morte Lenta******\n")
print("***********************************************\n")
print("Lanches:\n")
print("(a)Completo: Pão, 2 Hamburquers, 2 Queijos, Bacon, Ovo Frito, Alface e Tomate.\n")
print("(b)Econômico: Pão, Hamburquer, Queijo, Alface e Tomate.\n")
print("(c)Super-econômico: Pão e Hamburquer.\n")
print("Qual sua escolha?\n")
opcao=str(input(' '))

precofinal=float(0.0)
bacon=float(0.6)
ovo=float(0.7)
eqjo=float(0.25)
ehamb=float(1.5)
qjo=float(0.5)
alface=float(0.5)
tomate=float(0.5)
hamb=float(1.5)
pao=float(0.5)

preco_parcial_a=float(bacon+ovo+eqjo+ehamb)
preco_parcial_b=float(qjo+alface+tomate)
preco_parcial_c=float(pao+hamb)

if opcao=='a' or opcao=='A':
    precofinal=preco_parcial_a+preco_parcial_b+preco_parcial_c
    print("Preço final do lanche: R$",precofinal,".")
elif opcao=='b' or opcao=='B':
    precofinal=preco_parcial_b+preco_parcial_c
    print("Preço final do lanche: R$",precofinal,".")
elif opcao=='c' or opcao=='C':
    precofinal=preco_parcial_c
    print("Preço final do lanche: R$",precofinal,".")
else:
    print("Opção Inválida")

