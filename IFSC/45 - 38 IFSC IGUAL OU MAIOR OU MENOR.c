//38. Faça um algoritmo que leia os valores A, B e C. Mostre uma mensagem que
//informe se a soma de A com B é menor, maior ou igual a C.

#include <stdio.h>

int main() {
    int n1,n2,n3,soma;
    
    
    printf("DIGITE O PRIMEIRO NUMERO:");
    scanf ("%d", &n1);
    
    printf("DIGITE O SEGUNDO NUMERO:");
    scanf ("%d", &n2);
    
    printf("DIGITE O TERCEIRO NUMERO:");
    scanf ("%d", &n3);
    
soma = n1 + n2;

if (soma <n3) {
    printf ("A SOMA DE N1+N2 E MENOR Q NUMERO 3");
}
else if (soma >n3) {
    printf ("A SOMA DE N1+N2 E MAIOR DO QUE NUMERO 3");
}
else if (soma == n3) {
    printf ("A SOMA DE N1+N2 E IGUAL A NUMERO 3");
}

    return 0;
}
