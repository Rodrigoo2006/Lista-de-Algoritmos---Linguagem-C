//"Salário de Vendedor com Comissão e Percentual"
#include <stdio.h>

int main() {
    
float sl,vld,slb;
int carros;

printf ("QUANTOS CARROS VC VENDEU:");
scanf ("%d", &carros);

printf ("QUAL FOI O VALOR DAS VENDAS DO CARRO:");
scanf ("%f", &vld);

printf ("QUAL E O SEU SALARIO:");
scanf ("%f", &sl);

slb = (sl * 2) + (carros * 50) + (0.05 * vld);

printf ("SEU SALARIO E: %4.f", slb);

    return 0;
}
