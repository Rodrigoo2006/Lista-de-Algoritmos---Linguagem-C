//47. Construir um algoritmo que tome como entradas três valores distintos e os apresente (imprima) em ordem crescente (menor para o maior).
#include <stdio.h>

int main() {
    
    int n1,n2,n3,temp;
    
    printf("DIGITE O PRIMEIRO NUMERO:");
    scanf ("%d", &n1);
    
    printf("DIGITE O SEGUNDO NUMERO:");
    scanf ("%d", &n2);
    
    printf("DIGITE O TERCEIRO NUMERO:");
    scanf ("%d", &n3);
    
    if (n1 > n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 > n3) {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    
    printf ("ORDEM CRESCENTE: %d,%d,%d", n1,n2,n3);
    
    return 0;
}
