//9. Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles. Mostre o resultado.


#include <stdio.h>


int main (){
 
 int i = 0;
 int v[50];
 int maior,menor;
 
 for (i=0;i<50;i++) {
     printf ("DIGITE O VALOR:");
     scanf ("%d",&v[i]);
  }   

 maior = menor = v[0];
 
 for (i=0;i<50;i++) {
 if (v[i] > maior) {
  maior = v[i];
  }
 else if (v[i] < menor) {
     menor = v[i];
 }
 }
 printf ("Maior:%d\n",maior);
 printf ("Menor:%d\n",menor);
}
