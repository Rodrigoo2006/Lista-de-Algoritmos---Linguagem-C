// 74. O programa de uma loja de móveis mostra o seguinte menu na tela de vendas:
// 1 - Venda à Vista
// 2 - Venda a Prazo 30 dias
// 3 - Venda a Prazo 60 dias
// 4 - Venda a Prazo com 90 dias
// 5 - Venda com cartão de débito
// 6 - Venda com cartão de crédito
// Escolha a opção:

#include <stdio.h>

int main() {
    
    int n1;
    
    printf ("1 - Venda à Vista\n");
    printf ("2 - Venda a Prazo 30 dias\n");
    printf ("3 - Venda a Prazo 60 dias\n");
    printf ("4 - Venda a Prazo com 90 dias\n");
    printf ("5 - Venda com cartão de débito\n");
    printf ("6 - Venda com cartão de crédito\n");
    
    printf ("\nDIGITE A OPÇAO ESCOLHIDA:");
    scanf ("%d", &n1);

switch (n1) {
    
    case 1:
    printf ("OPÇAO ESCOLHIDA:1 - Venda à Vista");
    break;
    
    case 2:
    printf ("OPÇAO ESCOLHIDA:2 - Venda a Prazo 30 dias");
    break;
    
    case 3:
    printf ("OPÇAO ESCOLHIDA:3 - Venda a Prazo 60 dias");
    break;
    
    case 4:
    printf ("OPÇAO ESCOLHIDA:4 - Venda a Prazo com 90 dias");
    break;
    
    case 5:
    printf ("OPÇAO ESCOLHIDA:5 - Venda com cartão de débito");
    break;
    
    case 6:
    printf ("OPÇAO ESCOLHIDA:6 - Venda com cartão de crédito");
    break;
}
    return 0;
}
