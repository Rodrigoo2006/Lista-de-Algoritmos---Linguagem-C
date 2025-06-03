//CALCULA IDADE, MES E DIA DO NASCIMENTO DE UMA PESSOA
#include <stdio.h>

int main() {
    
    int dias,meses,anos,qtd_dias;
    
    printf("Informe a sua idade (ano,mes,dias):");
    
    printf ("\nIDADE:");
    scanf ("%d", &anos);
    
    printf ("MES DE NASCIMENTO:");
    scanf ("%d", &meses);
    
    printf ("DIA DO NASCIMENTO:");
    scanf ("%d", &dias);
    
    qtd_dias = (anos * 360) + (meses * 30) + dias;
    
    printf("\nVIVEU: %d",qtd_dias);

    return 0;
}
