// 107. Faça um algoritmo que leia um conjunto de dados numéricos (X) e imprima o 

//maior (Maximo) dentre eles. Admita que o valor 9999 é utilizado como sentinela. 

//Ex.: 1, 2, 3 => Maior=3

#include <stdio.h>

int main() {
    int num,maior=0;
    
    printf ("DIGITE 9999 PARA ENCERRAR !\n");
    
    while (1) {
    printf("Digite um número:");
    scanf ("%d",&num);
    if (num==9999) {
        break;
    }
    
    if (num>maior) {
        maior = num;
    }
}
printf ("MAIOR NÚMERO:%d\n",maior);
    return 0;
}
