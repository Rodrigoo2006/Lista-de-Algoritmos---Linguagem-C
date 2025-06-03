//27. Escreva um algoritmo que leia 500 valores inteiros e positivos e:
//a) encontre o maior valor;
//b) encontre o menor valor;
//c) calcule a média dos números lidos.

#include <stdio.h>

int main() {
    
    int num,i=0,menor=0,maior=0,soma=0;
    float media;
    
    for (i=0;i<5;i++) {
    printf ("Digite um numero:");
    scanf ("%d", &num);
    
    soma +=num;
    
    if (i==0) {
        maior=menor=num;
    }
    else if (num>maior) {
            maior=num;
        }
    else if (num<menor) {
            menor=num;
        }
    }

media = soma /5.0;

printf ("MAIOR NUMERO:%d\n",maior);
printf ("MENOR NUMERO:%d\n",menor);
printf ("MEDIA:%.2f\n",media);

return 0;
}
