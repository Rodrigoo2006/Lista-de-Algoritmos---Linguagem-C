//19. Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule a quantidade de números pares e ímpares, a média de valores pares e a
//média geral dos números lidos. O número que encerrará a leitura será zero.


#include <stdio.h>

int main() {

    int numero;
    int par=0;
    int impar=0;
    int total =0;
    float numpar =0;
    
    while (1) {
    printf("Digite um número (POSITIVO):");
    scanf("%d", &numero);
   if (numero <0) {
       break;
   }
   total++;
   
    if (numero % 2 == 0) {
       par++;
    } else {
        impar++;
    }
}
numpar = (par*100) /total;

printf ("NUMERO PAR:%d\n",par);
printf ("MÉDIA DE NÚMERO PAR:%.2f\n",numpar);
printf ("NUMERO IMPAR:%d\n", impar);

return 0;
}
