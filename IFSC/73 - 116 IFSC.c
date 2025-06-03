// 116. Faça um algoritmo que leia um número e divida-o por dois (sucessivamente)
//ate que o resultado seja menor que 1. Mostre o resultado da ultima divisão e a
//quantidade de divisões efetuadas. 

#include <stdio.h>

int main() {
 double num,i=0;
 int q=0;
 
    printf("Digite um numero:");
    scanf ("%lf",&num);
    
    while (num>=1) {
    printf ("%.2f\n",num);
    num = num/2;
    q++;
    }
    printf ("ULTIMA DIVISAO:%.2f\n",num);
    printf ("DIVISOES EFETUADAS:%d\n",q);

    return 0;
}
