// 80. Construa um algoritmo que leia um número inteiro de 1 a 7 e informe o dia da 

//semana correspondente, sendo domingo o dia de número 1. Se o número não 

//corresponder a um dia da semana, mostre uma mensagem de erro.

#include <stdio.h>

int main() {
    int num;
    
    printf ("NÚMERO DE 1 A 7\n");
    
    printf("DIGITE UM NÚMERO:");
    scanf ("%d",&num);
    
    if (num ==1) {
        printf ("DOMINGO\n");
    }
    else if (num==2) {
        printf ("SEGUNDA-FEIRA\n");
    }
    else if (num==3) {
        printf ("TERÇA-FEIRA\n");
    }
    else if (num==4) {
        printf ("QUARTA-FEIRA\n");
    }
    else if (num==5) {
        printf ("QUINTA-FEIRA\n");
    }
    else if (num==6) {
        printf ("SEXTA-FEIRA\n");
    }
    else if (num==7) {
        printf ("SÁBADO\n");
    }
    else {
        printf ("NÚMERO INVÁLIDO\n");
    }
    return 0;
}
