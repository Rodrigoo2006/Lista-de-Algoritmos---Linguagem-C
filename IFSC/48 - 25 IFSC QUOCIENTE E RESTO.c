//25. Faça um algoritmo que leia dois números inteiros (Int1 e Int2) e imprima o 
//quociente e o resto da divisão inteira de Int1 por Int2.

#include <stdio.h>

int main() {
    int v1,v2;
    
    printf("Digite o valor 1:");
    scanf ("%d",&v1);
    
    printf ("Digite o Valor 2:");
    scanf ("%d",&v2);
    
    int quociente = v1/v2;
    int resto = v1%v2;
    
    printf ("Quociente:%d\n", quociente);
    printf ("Resto:%d\n", resto);
    

    return 0;
}
