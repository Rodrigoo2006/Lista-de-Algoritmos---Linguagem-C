//102. Um hotel com 30 quartos cobra R$ 50,00 por diária e mais uma taxa de
//serviços. A taxa de serviços é de:
//• R$ 4,00 por diária, se o número de diárias for < 15;
//• R$ 3,60 por diária, se o número de diárias for = 15;
//• R$ 3,00 por diária, se o número de diárias for > 15.
//Faça um algoritmo que imprima o nome e o total da conta de cada cliente do hotel.
//Imprima também o total ganho pelo hotel. 

#include <stdio.h>
#include <string.h>

int main () {

    char nome [50];
    float diaria;
    float valor_diaria=50,d1,d2,d3;
    float taxa1=4.00,taxa2 = 3.60,taxa3=3.00;
    float soma=0;
    
    for (int i=0;i<30;i++) {
    printf ("SEJA BEM VINDO!\n");
    printf ("QUAL O SEU NOME:");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;
    
    printf ("QUANTAS DIARIAS VOÇE QUER:");
    scanf ("%f", &diaria);
    getchar ();
    
    d1= (valor_diaria *diaria) + (taxa1*diaria);
    d2= (valor_diaria *diaria) + (taxa2*diaria);
    d3= (valor_diaria *diaria) + (taxa3*diaria);
    
    if (diaria <15) {
    printf ("\nVALOR A PAGAR:R$%.2f\n",d1);
    soma+=d1;
    }
    else if (diaria ==15) {
    printf ("\nVALOR A PAGAR:R$%.2f\n",d2);
    soma+=d2;
    }
    else if (diaria >15) {
    printf ("\nVALOR A PAGAR:R$%.2f\n",d3);
    soma+=d3;
    }
    
    }
    printf ("VALOR TOTAL ARRECADADO PELO HOTEL:R$ %2.f\n",soma);
    
    return 0;

}
