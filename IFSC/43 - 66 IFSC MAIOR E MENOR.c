//66. Escreva um algoritmo que leia dois números inteiros e determine qual é o menor e qual é o maior também. 

#include <stdio.h>

int main () {
    
int n1,n2;

printf ("DIGITE O VALOR 1:");
scanf ("%d", &n1);

printf ("DIGITE O NUMERO 2:");
scanf ("%d", &n2);

if (n1<n2) {
    printf ("ESSE E O MENOR:%d\n", n1);
}
else {
    printf ("ESSE E O MENOR:%d\n", n2);
}
if (n1>n2) {
    printf ("ESSE E O MAIOR:%d\n", n1);
}
else {
    printf ("ESSE E O MAIOR:%d\n",n2);
}

}
