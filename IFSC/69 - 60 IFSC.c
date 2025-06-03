//60 - O cardápio de uma lanchonete é o seguinte: Especificação Preço unitário
//100 Cachorro quente 1,10 
//101 Bauru simples 1,30 
//102 Bauru c/ovo 1,50 
//103 Hamburger 1,10 
//104 Cheeseburger 1,30 
//105 Refrigerante 1,00 
//Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule 
//o valor a ser pago por aquele lanche. Considere que a cada execução somente 
//será calculado um item.

#include <stdio.h>

int main () {
int cod,q;
float cq=1.10,bs=1.30,bo=1.50,hb=1.10,cb=1.30,rf=1.00;

printf ("100 - Cachorro quente - R$1,10\n");
printf ("101 - Bauru simples - R$1,30\n");
printf ("102 - Bauru c/ovo - R$1,50\n");
printf ("103 - Hamburger - R$1,10\n");
printf ("104 - Cheeseburger - R$1,30\n");
printf ("105 - Refrigerante - R$1,00\n");

printf ("Qual você quer (cod):");
scanf ("%d",&cod);

printf ("Quantos você quer:");
scanf ("%d",&q);

if (cod==100) {
    printf ("Valor a pagar:%.2f\n",cq*q);
}
else if (cod==101) {
    printf ("Valor a pagar:.2f\n",bs*q);
}
else if (cod==102) {
    printf ("Valor a pagar:%.2f\n",bo*q);
}
else if (cod==103) {
    printf ("Valor a pagar:%.2f\n",hb*q);
}
else if (cod==104) {
    printf ("Valor a pagar:%.2f\n",cb*q);
}
else if (cod==105) {
    printf ("Valor a pagar:%.2f\n",rf*q);
}
else {
    printf ("Código Inválido");
}

    return 0;
}
