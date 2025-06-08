//108. Faça um algoritmo que leia dois números inteiros positivos (Num1 e Num2) e 

//imprima o quociente (Quoc) e o resto (Resto) da divisão de Num1 por Num2, 

//utilizando apenas as operações de adição e subtração. 
//Ex.: N1=10; N2=2 => Q=5 R=0

#include <stdio.h>

int main() {
    int num1,num2;

    printf("Digite o valor 1:");
    scanf ("%d",&num1);

    printf ("Digite o Valor 2:");
    scanf ("%d",&num2);

    int quociente = num1/num2;
    int resto = num1%num2;

    printf ("Quociente:%d\n", quociente);
    printf ("Resto:%d\n", resto);


    return 0;
}
