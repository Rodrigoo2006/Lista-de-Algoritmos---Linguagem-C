// 70. Crie um algoritmo que retorne verdadeiro quando um número fornecido for par.

#include <stdio.h>

int main() {
    
    int n1;
    
    printf("Digite um número:");
    scanf ("%d",&n1);
    
    if (n1%2 ==0) {
        printf ("Verdadeiro (Par)\n");
    }
    
    else {
        printf ("Falso (Impar)\n");
    }

    return 0;
}
