//15. Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: [0.25], [26,50], [51,75] e [76,100]. A
//entrada de dados deve terminar quando for lido um número negativo.

#include <stdio.h>

int main() {

int n1=0;
int q1=0,q2=0,q3=0,q4=0;

printf ("DIGITE UM NUMERO NEGATIVO PARA ENCERRAR !\n");

while (!0) {

printf ("DIGITE UM NUMERO:");
scanf ("%d",&n1);
if(n1 <0) {
    break;
}
if (n1>=0 && n1<=25) {
    q1++;
}
else if (n1>=26 && n1<=50) {
    q2++;
}
else if (n1>=51 && n1<=75) {
    q3++;
}
else if (n1>=76 && n1<=100) {
    q4++;
}
}

printf ("NUMERO ENTRE 0 A 25:%d\n",q1);
printf ("NUMERO ENTRE 26 A 50:%d\n",q2);
printf ("NUMERO ENTRE 51 A 75:%d\n",q3);
printf ("NUMERO ENTRE 76 A 100:%d\n",q4);

return 0;
}
