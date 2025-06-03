#include <stdio.h>

int main () {
    
    float tg,vm,d,litros_usados;
    
    printf ("Digite o tempo gasto na viagem:");
    scanf ("%f", &tg);
    
    printf ("Digite a velocidade media:");
    scanf ("%f", &vm);
    
    d = tg * vm;
    litros_usados = d /12;
    
    printf ("Velocidade média: %.2f \n", vm);
    printf ("Tempo gasto na viagem: %.2f \n", tg);
    printf ("Distancia percorrida: %.2f \n", d);
    printf ("velocidade média: %.2f \n", vm);
    printf ("Litros usados: %.2f \n", litros_usados);
    
    return 0;
}
