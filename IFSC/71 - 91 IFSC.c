// 91. Faça um algoritmo que imprima todos os números pares compreendidos entre 

//85 e 907. O algoritmo deve também calcular a soma destes valores.

#include <stdio.h>

int main() {
    int i,soma;
    
    for (i=85;i<=907;i++) {
    if (i%2 ==0) {
        printf ("%d\n",i);
        soma+=i;
    }
    if (i == 906) {
    printf ("%d",soma);
    }
    }
    return 0;
}
