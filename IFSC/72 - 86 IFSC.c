//86. Crie um algoritmo chamado Estacoes. Este algoritmo deve ler uma data e 

//armazenar na variável mes um número entre 1 e 12, correspondendo a um dos 

//meses do ano. No final, você deve imprimir uma mensagem conforme o exemplo: 
 //"A estação do ano correspondente ao mês 3 é Verão" 
//Considere a estação prevalente para cada mês: 

//a) Janeiro (1): Verão 
//b) Fevereiro (2): Verão 
//c) Março (3): Verão 
//d) Abril (4): Outono 
//e) Maio (5): Outono 
//f) Junho (6): Outono 
//g) Julho (7): Inverno 
//h) Agosto (8): Inverno 
//i) Setembro (9): Inverno 
//j) Outubro (10): Primavera 
//k) Novembro (10): Primavera 
//l) Dezembro (10): Primavera

#include <stdio.h>

int main() {
    int mes;
    
    printf ("Qual o mês:")
    scanf ("%d",&mes);
    
    if (mes>12) {
        break;
    }
    
    if (mes == 1) {
    printf ("A estação do ano correspondente ao mês 1 é Verão\n");
    }
    else if (mes==2) {
    printf ("A estação do ano correspondente ao mês 2 é Verão\n");
    }
    else if (mes==3) {
        printf ("A estação do ano correspondente ao mês 3 é Verão\n");
    }
    else if (mes==4) {
        printf ("A estação do ano correspondente ao mês 1 é Outono\n");
    }
    else if (mes==5) {
        printf (" A estação do ano correspondente ao mês 5 é Outono\n");
    }
    else if (mes==6) {
        printf ("A estação do ano correspondente ao mês 6 é Outono\n");
    }
    else if (mes==7) {
        printf ("A estação do ano correspondente ao mês 7 é Inverno\n");
    }
    else if (mes==8) {
        printf ("A estação do ano correspondente ao mês 8 é Inverno\n");
    }
    else if (mes==9) {
        printf ("A estação do ano correspondente ao mês 9 é Inverno\n");
    }
    else if (mes==10) {
        printf ("A estação do ano correspondente ao mês 10 é Primavera\n");
    }
    else if (mes ==11) {
        printf ("A estação do ano correspondente ao mês 11 é Primavera\n");
    }
    else if (mes==12) {
        printf ("A estação do ano correspondente ao mês 12 é Primavera\n");
    }

    return 0;
}
