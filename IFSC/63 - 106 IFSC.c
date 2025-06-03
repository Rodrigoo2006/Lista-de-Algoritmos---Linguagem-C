////106. Faça um algoritmo que leia um conjunto de números (X) e imprima sua soma
//(Soma) e sua média (Media). Admita que o valor 9999 é utilizado como sentinela
//para fim de leitura.
//Ex.: 1, 2, 3 => Soma=6 Media=2

#include <stdio.h>

int main() {                                                        
    int num=0;
    int soma=0,q1=0;
    int media=0;
    while (1) {
        printf ("Digite um numero:");
        scanf ("%d",&num);
        
        if (num == 9999) {
            break;
        }
        q1++;
        
        soma += num;
        media = soma/q1;
        
        
        
    }
    printf ("SOMA DOS  NUMEROS:%d\n",soma);
    printf ("MEDIA DOS  NUMEROS:%d\n",media);
     
    return 0;
}
