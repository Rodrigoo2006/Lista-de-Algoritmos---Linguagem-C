//21. Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado da soma do quadrado de cada valor lido.

#include <stdio.h>

int main() {
    
    int a,b;
    
    printf ("Digite o primeiro numero:");
    scanf ("%d", &a);
    
    printf ("Digite o segundo numero:");
    scanf ("%d", &b);
    
    printf ("Soma do 1numero do quadrado: %d \n",a*a);
    printf ("Soma do 2numero do quadrado: %d \n",b*b);
    return 0;
}
