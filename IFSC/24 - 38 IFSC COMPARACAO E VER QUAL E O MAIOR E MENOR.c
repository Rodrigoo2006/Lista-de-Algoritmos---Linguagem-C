//Faça um algoritmo que leia os valores A, B e C. Mostre uma mensagem que informe se a soma de A com B é menor, maior ou igual a C
#include <stdio.h>

int main() {
    
    int n1,n2,n3,soma;
    
    printf("Informe o primeiro numero:");
    scanf ("%d", &n1);
    
    printf("Informe o segundo numero:");
    scanf ("%d", &n2);
    
    printf("Informe o terceiro numero:");
    scanf ("%d", &n3);
    
    soma = n1 + n2;
    
    if (soma > n3) { 
        printf ("A SOMA DE A + B E MAIOR QUE C");
    }
    else if (soma == n3){
        printf ("A soma de A + B é IGUAL a C");
    }
    else {
        printf ("A soma de A + B é MENOR que C");
    }

    return 0;
}
