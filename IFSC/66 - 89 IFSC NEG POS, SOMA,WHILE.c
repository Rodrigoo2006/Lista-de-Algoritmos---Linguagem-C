// 89. Construa um Algoritmo que, para um grupo de 50 valores inteiros, determine: 

//a) A soma dos números positivos; 

//b) A quantidade de valores negativos;

#include <stdio.h>

int main() {
int i,pos=0,neg=0,soma=0;
int num=0;

for (i=1;i<=50;i++) {
    printf ("Digite um número:");
    scanf ("%d",&num);
    
    if (num>0) {
        pos++;
        soma+=num;
    }
    else {
        neg++;
    }
}
printf ("Soma dos números positivos:%d\n",soma);
printf ("Quantidade de Número Negativo:%d\n",neg);

    return 0;
}
