//14. Escrever um algoritmo que leia um número não determinado de valores e calcule a média aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de
//valores negativos e o percentual de valores negativos e positivos. Mostre os resultados.



#include <stdio.h>

int main() {

int valor;
int total=0;
float m1,m2;
int neg =0,pos=0;


printf ("DIGITE 0000 PARA ENCERRAR\n");

while (1) {
    
    printf ("DIGITE UM NUMERO:");
    scanf ("%d", &valor);
    
    if (valor ==0000) {
        break;
    }
    total++;
    
    if (valor>0) {
        pos++;
    }
    else {
    neg++;
    }
    
    m1= (pos*100) /total;
    m2= (neg*100) /total;
    
    
}
printf ("QUANTIDADE DE NUMERO POSITIVO:%d\n", pos);
printf ("QUANTIDADE DE NUMERO NEGATIVO:%d\n", neg);
printf ("PERCENTUAL DE NUMERO POSITIVO:%.2f%\n",m1);
printf ("PERCENTUAL DE NUMERO NEGATIVO:%.2f%\n",m2);
return 0;
}
