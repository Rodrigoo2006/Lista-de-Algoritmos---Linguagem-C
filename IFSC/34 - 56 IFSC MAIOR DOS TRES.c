//56. Elaborar um algoritmo que lê três valores a, b, c e os escreve. A seguir, encontre o maior dos três valores e o escreva com a mensagem : "É o maior”.

#include <stdio.h>

int main() {
    
    int n1,n2,n3,maior;
    
    printf("DIGITE O PRIMEIRO VALOR:");
    scanf ("%d", &n1);
    
    printf("DIGITE O SEGUNDO VALOR:");
    scanf ("%d", &n2);
    
    printf("DIGITE O TERCEIRO VALOR:");
    scanf ("%d", &n3);
    
    maior = n2;
    
    if (n1 > maior && n1 > n3) {
        printf ("ESSE E O MAIOR: %d", n1);
    }
    else {
        printf ("ESSE E O MAIOR: %f", maior);
    }
    if (n3 > maior && n3 > n1) {
        printf ("ESSE E O MAIOR: %d", n3);
    }

    return 0;
}
