// 46. Um hotel cobra R$ 60,00 a diária e mais uma taxa de serviços. A taxa de serviços é de:
// - R$ 5,50 por diária, se o número de diárias for maior que 15;
// - R$ 6,00 por diária, se o número de diárias for igual a 15;
// - R$ 8,00 por diária, se o número de diárias for menor que 15.
// O algoritmo deve mostrar o nome e o total da conta de um cliente.

#include <stdio.h>
#include <string.h>

int main () {

    char nome [50];
    float diaria;
    float valor_diaria=60,d1,d2,d3;
    float taxa1=5.50,taxa2 = 6.00,taxa3=8.00;
    
    printf ("SEJA BEM VINDO!\n");
    printf ("QUAL O SEU NOME:");
    fgets(nome, sizeof(nome), stdin);
    
    printf ("QUANTAS DIARIAS VOÇE QUER:");
    scanf ("%f", &diaria);
    
    d1= (valor_diaria *diaria) + (taxa1*diaria);
    d2= (valor_diaria *diaria) + (taxa2*diaria);
    d3= (valor_diaria *diaria) + (taxa3*diaria);
    
    if (diaria >15) {
    printf ("\nVALOR A PAGAR:R$%.2f\n",d1);
    }
    else if (diaria ==15) {
    printf ("\nVALOR A PAGAR:R$%.2f\n",d2);
    }
    else if (diaria <15) {
    printf ("\nVALOR A PAGAR:R$%.2f\n",d3);
    }
    
    
    return 0;

}
