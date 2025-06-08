//51. Faça um algoritmo que leia dois números e mostre qual o maior dos dois .
#include <stdio.h>

int main() {
    
    int n1,n2;
    
    printf("DIGITE O PRIMEIRO NUMERO:");
    scanf ("%d", &n1);
    
    printf("DIGITE O SEGUNDO NUMERO:");
    scanf ("%d", &n2);
    
    if (n1 > n2) {
    printf ("ESSE E O MAIOR: %d", n1);
    }
    else {
        printf ("ESSE E O MAIOR: %d", n2);
    }
    
    return 0;
}
