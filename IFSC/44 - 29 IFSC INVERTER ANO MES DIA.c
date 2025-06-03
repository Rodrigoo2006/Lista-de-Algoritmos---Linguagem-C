//29. Admitindo que uma data é lida pelo algoritmo em uma variável inteira, e não em
//uma variável do tipo data, crie um algoritmo que leia uma data no formato
//DDMMAA e imprima essa data no formato AAMMDD, onde:
//• A letra D corresponde a dois algarismos representando o dia;
//• A letra M corresponde a dois algarismos representando o mês;
//• A letra A corresponde aos dois últimos algarismos representando o ano. 

#include <stdio.h>

int main() {
    int ano,mes,dia;
    
    printf("DIGITE O DIA:");
    scanf ("%d", &dia);
    
    printf("DIGITE O MES:");
    scanf ("%d", &mes);
    
    printf("DIGITE O ANO:");
    scanf ("%d", &ano);
    
    printf ("%d", ano);
    printf ("%d", mes);
    printf ("%d", dia);

    return 0;
}
