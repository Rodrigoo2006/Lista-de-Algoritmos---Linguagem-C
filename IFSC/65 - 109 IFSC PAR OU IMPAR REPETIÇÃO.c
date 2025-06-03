//109. Faça um algoritmo que leia um conjunto de números (X) e imprima a 

//quantidade de números pares (QPares) e a quantidade de números impares 

//(QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela para fim de 
//leitura. 
//Ex.: 1,2,3,4,5 => Pares=2 Impares=3

#include <stdio.h>

int main() {
    int num=0;
    int np=0,ni=0;
    
    while (1) {
    printf("Digite um número:");
    scanf ("%d",&num);
    
    if (num==9999) {
        break;
    }
    
    if (num %2 ==0) {
    np++;
    }
    else {
    ni++;
    }
    }
    
    printf ("Quantidade de Números Pares:%d\n", np);
    printf ("Quantidade de Número Impar:%d\n", ni);


    return 0;
}
