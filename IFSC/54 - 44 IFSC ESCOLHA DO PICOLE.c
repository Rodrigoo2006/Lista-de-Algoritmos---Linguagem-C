// 44. Uma sorveteria vende três tipos de picolés. Sabendo-se que o picolé do tipo 1 é 
//vendido por R$ 0.50, o do tipo 2 por R$ 0.60 e o do tipo 3 por R$ 0.75, faça um 
//algoritmo que, para cada tipo de picolé, mostre a quantidade vendida e o total 
//arrecadado.
#include <stdio.h>

int main() {
    float p1=0.50,p2=0.60,p3=0.75;
    int q1,q2;
    float qu,qu2,qu3;
    int c1,c2,c3;
    
    printf ("PICOLÉ 1 - 0.50\n");
    printf ("PICOLÉ 2 - 0.60\n");
    printf ("PICOLÉ 3 - 0.75\n");
    while (1) {
    printf("Qual tipo de Picole Você quer:");
    scanf ("%d",&q1);
    printf ("Quantos picolés você quer:");
    scanf ("%d",&q2);
    
    
    if (q1 == 1) {
     if (q2 >0) {
        qu = q2*p1;
        printf ("Valor a pagar:%.2f\n",qu);
        }
    }
    
    else if (q1 == 2) {
        if (q2 >0) {
        qu2 = q2*p2;
        printf ("Valor a pagar:%.2f\n",qu2);
    }
    }
    
    else if (q1 == 3) {
        if (q2 >0) {
        qu3 = q2*p3;
        printf ("Valor a pagar:%.2f\n",qu3);
        }
    }
    
}
    return 0;
}
