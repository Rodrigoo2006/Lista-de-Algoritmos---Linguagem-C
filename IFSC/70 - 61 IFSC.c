//61. Um usuário deseja um algoritmo pelo qual possa escolher que tipo de média 

//deseja calcular a partir de três notas. Faça um algoritmo que leia as notas, a 

//opção escolhida pelo usuário e calcule a média: 
//1- aritmética 
//2- ponderada (pesos 3, 3, 4)

#include <stdio.h>

int main() {
int num,i,f;
float num1;
float nump1,nump2,nump3;
float media,soma=0;

printf("1 - ARITMÉTICA\n");
printf("2 - PONDERADA (pesos 3, 3, 4)\n");

printf("QUAL VOCÊ DESEJA:");
scanf ("%d",&num);

if (num==1.00) {
    for (i=0;i<=2;i++) {
    int q;
    q++;
    printf("DIGITE UM NÚMERO:");
    scanf ("%f",&num1);
    soma+=num1;
    if (i==2) {
    printf ("Média Aritmética:%.2f",soma/q);
    }
    }
}
else if (num==2.00) {
    printf ("DIGITE UM NÚMERO (Peso 3):");
    scanf ("%f",&nump1);
    printf ("DIGITE UM NÚMERO (Peso 3):");
    scanf ("%f",&nump2);
    printf ("DIGITE UM NÚMERO (Peso 4):");
    scanf ("%f",&nump3);
    media = (nump1*3.00 + nump2*3.00 + nump3*4.00) /10.00;
    printf ("Média ponderada:%.2f\n",media);
}



    return 0;
}
