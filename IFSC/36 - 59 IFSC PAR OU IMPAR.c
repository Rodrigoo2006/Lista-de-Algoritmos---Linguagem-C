//59. Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par ou ímpar e se é positivo ou negativo.

#include <stdio.h>

int main() {
    
int n1;

printf ("DIGITE UM NUMERO:");
scanf ("%d", &n1);

if (n1 %2 ==0) {
    printf ("O NUMERO E PAR: %d",n1);
}
else {
    printf ("O NUMERO E IMPAR: %d",n1);
}

if (n1 >=0) {
    printf ("\nE POSITIVO !!!");
}
else {
    printf ("\nE NEGATIVO !!");
}
return 0;
}
