#include <stdio.h>

int main() {
   
float nota1, nota2,nota;
   
printf("Digite a sua primeira nota bimestral:");
scanf ("%f", &nota1);

printf("Digite a sua segunda nota bimestral:");
scanf ("%f", &nota2);

if (nota1 >5.0 && nota1 <=10.0) {
printf ("APROVADO NO PRIMEIRO BIMESTRE\n");
}
else {
    printf ("REPROVADO NO PRIMEIRO BIMESTRE\n");
}

if (nota2 >5.0 && nota2 <=10.0) {
printf ("APROVADO NO SEGUNDO BIMESTRE\n");
}
else {
    printf ("REPROVADO NO SEGUNDO BIMESTRE\n");
}

    return 0;
}
