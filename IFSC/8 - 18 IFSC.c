#include <stdio.h>

int main() {
    
    int larg,alt,comp,vm;
    
    printf ("Digite a largura:");
    scanf ("%d", &larg);
    
    printf ("Digite o Comprimento:");
    scanf ("%d", &comp);
    
    printf ("Digite a largura:");
    scanf ("%d", &alt);
    
    vm = comp * larg * alt;
    
    printf("Resultado: %d", vm);

    return 0;
}
