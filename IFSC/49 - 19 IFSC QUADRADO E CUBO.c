//19. Faça um algoritmo que
//leia um valor inteiro e
//apresente os resultados do 
//quadrado e do cubo do valor lido.

#include <stdio.h>

int main () {

int valor;

printf ("Digite um valor:");
scanf ("%d",&valor);

printf ("Cubo:%d\n", valor*valor*valor);
printf ("Quadrado:%d\n", valor*valor);

return 0;

}
