#include <stdio.h>

int main () {

//29. Escrever um algoritmo que calcule e
//mostre a média aritmética dos números
//lidos entre 13 e 73.

int soma=0,co=0,i;

for (i=13;i<=73;i++) {

soma+=i;

printf ("%d\n",i);

if (i==73) {
printf ("%d\n",soma);
}
}
return 0;
}
