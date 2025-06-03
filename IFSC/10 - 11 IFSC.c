#include <stdio.h>

int main() {
    
float ht,vh,pd,sb,td,sl;

printf ("Digite a horas trabalhadas no mês:");
scanf ("%f", &ht);

printf ("Digite o valor por hora trabalhada:");
scanf ("%f", &vh);

printf ("Digite o percentual de desconto:");
scanf ("%f", &pd);

sb = ht * vh;
td = pd/100 * sb;
sl = sb - td;

printf ("Horas trabalhadas: %.2f \n", ht);
printf ("Salario bruto: %.2f \n",sb);
printf ("Desconto: %.2f \n",td);
printf ("Salario liquido: %.2f \n",sl);

return 0;
}
