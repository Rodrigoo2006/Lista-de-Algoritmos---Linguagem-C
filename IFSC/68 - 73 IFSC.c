//73. Faça um programa, utilizando estrutura de condição, que receba um número 

//real, digitado pelo usuário e mostre o menu para selecionar o tipo de cálculo que 

//deve ser realizado: 
//101-Raiz quadrada 
//102-A metade 
//103-10% do número 
//104-O dobro 
//Escolha a opção:

#include <stdio.h>
#include <math.h>

int main() {

double raiz;
int op,dezp;
int numero;

printf ("\nEscolha a opção:\n");
printf ("101-Raiz quadrada\n");
printf ("102-A metade\n");
printf ("103-10 porcento do número\n");
printf ("104-O dobro\n");

printf("Digite a Opção:");
scanf ("%d",&op);

if (op==101) {
printf ("Digite um número:");
scanf ("%d",&numero);
raiz=sqrt ((double)numero);
printf ("A raiz quadrada do número %d é %.2f\n",numero,raiz);
}

else if (op==102) {
printf ("Digite um número:");
scanf ("%d",&numero);
printf ("A metade de %d é %d\n",numero,numero/2);
}

else if (op==103) {
printf ("Digite um número:");
scanf ("%d",&numero);
dezp= numero*10/100;
printf ("10 porcento do número %d é %d\n",numero,dezp);
}
else if (op==104) {
printf ("Digite um número:");
scanf ("%d",&numero);
printf ("O dobro de %d é %d\n",numero,numero*2);
}
    return 0;
}
