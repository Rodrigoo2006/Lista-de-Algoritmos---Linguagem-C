//88. Some os números de 1 a 100 e imprima o valor.

#include <stdio.h>

int main () {

int soma=0,i=0;

for (int i=0;i<100;i++) {
printf ("%d\n",i);
soma +=i;
}

printf ("%d\n",soma);

return 0;
}
