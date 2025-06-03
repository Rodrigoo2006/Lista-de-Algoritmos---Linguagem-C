//54. Faça um algoritmo que leia quatro números (Opção , Num1 , Num2 e Num3) e mostre o valor de Num1 se Opção for igual a 2;
//o valor de Num2 se Opção for igual a 3; e o valor de Num3 se Opção for igual a 4. 
// Os únicos valores possíveis para a variável Opção são 2, 3 e 4.

#include <stdio.h>

int main() {
    
int num1,num2,num3,opcao;

    printf("Digite o valor de num1: ");
    scanf("%d", &num1);

    printf("Digite o valor de num2: ");
    scanf("%d", &num2);

    printf("Digite o valor de num3: ");
    scanf("%d", &num3);

    printf("Digite a opção (2, 3 ou 4): ");
    scanf("%d", &opcao);

    switch (opcao) {
    
    case 2:
    printf ("NUM 2: %d \n", num1);
    break;
    
    case 3:
    printf ("NUM 3: %d", num2);
    break;
    
    case 4:
    printf ("NUM 4: %d",num3);
    break;
    
    default:
    printf ("VALOR IMPOSSIVEL");
    break;
}

return 0;
}
