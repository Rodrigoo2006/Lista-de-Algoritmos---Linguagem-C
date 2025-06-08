//100. Crie um programa que peça 10 números inteiros e apresente: a média, o maior 
//e o menor.
#include <stdio.h>

int main () {
    int maior=0,menor,num,soma=0;
    int q,media;
    for (int i=0;i<=9;i++) {
        printf ("DIGITE UM NÚMERO:");
        scanf ("%d",&num);
        q++;
        soma+=num;
        
        if (i==0) {
            menor = num;
        }
        else if (num<menor) {
            menor =num;
        }
        
        if (num>maior) {
            maior = num;
        }
    }
    printf ("Menor:%d\n",menor);
    printf ("Maior:%d\n",maior);
    printf ("Média:%d\n",soma/q);
}
