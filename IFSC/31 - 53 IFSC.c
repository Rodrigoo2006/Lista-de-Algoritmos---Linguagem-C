//53. Faça um algoritmo que leia três números e mostre-os em ordem decrescente.
#include <stdio.h>

int main() {
    
    int n1,n2,n3,temp;
    
    printf("DIGITE O PRIMEIRO NUMERO:");
    scanf ("%d", &n1);
    
    printf("DIGITE O SEGUNDO NUMERO:");
    scanf ("%d", &n2);
    
    printf("DIGITE O TERCEIRO NUMERO:");
    scanf ("%d", &n3);
    
    if (n1 < n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 < n3) {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n2 < n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    
    printf ("ORDEM DECRESCENTE: %d,%d,%d", n1,n2,n3);
    
    return 0;
}
