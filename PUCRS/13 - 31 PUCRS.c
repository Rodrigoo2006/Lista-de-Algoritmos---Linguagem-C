//31. Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas
//informações.

#include <stdio.h>

int main () {
    int valor=0,i=0,c=0,d=0;
    
    for (i=0;i<10;i++) {
        printf ("DIGITE UM VALOR:");
        scanf ("%d", &valor);
        
        if (valor >=10 && valor<=20) {
            c++;
        }
        else {
            d++;
        }
    }
    printf ("ESTAO DENTRO DO INTERVALO:%d\n",c);
    printf ("ESTAO FORA DO INTERVALO:%d\n",d);

return 0;
}
