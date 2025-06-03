//67. Crie o algoritmo Funcionario para calcular o aumento salarial de um empregado Por padrão, o aumento será de 15%. Entretanto, deve ser aplicada uma regra
//diferente para cada faixa salarial. Regras:
//a) se 1.500,00 <= salarioAtual < 1.750,00: aumento igual a 12%
//b) se 1.750,00 <= salarioAtual < 2.000,00: aumento igual a 10%
//c) se 2.000,00 <= salarioAtual < 3.000,00: aumento igual a 7%
//d) se salarioAtual acima de 3.000,00: aumento igual a 5%. 

#include <stdio.h>

int main() {
    
    float sl,sl1;
    
    printf("DIGITE O SEU SALARIO:");
    scanf ("%f", &sl);
   
   if (sl >=1500 && sl <1750) {
       
       printf ("SEU SALARIO E: %.2f", sl*1.12);
   }
   else if (sl >=1750 && sl <2000) {
       printf ("SEU SALARIO E: %.2f", sl*1.10);
   }
   else if (sl >=2000 && sl <3000) {
       printf ("SEU SALARIO E: %.2f", sl*1.07);
   }
   else if (sl >3000) {
       printf ("SEU SALARIO E: %.2f", sl*1.05);
   }
   else if (sl <1500) {
       printf ("SEU SALARIO E: %.2f", sl*1.15);
   }
    return 0;
}
