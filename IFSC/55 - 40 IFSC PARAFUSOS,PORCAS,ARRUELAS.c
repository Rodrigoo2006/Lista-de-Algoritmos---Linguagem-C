//40. Uma empresa produz três tipos de peças mecânicas: parafusos, porcas e
//arruelas. Têm-se os preços unitários de cada tipo de peça e sabe-se que sobre
//estes preços incidem descontos de 10% para porcas, 20% para parafusos e 30%
//para arruelas. Escreva um algoritmo que calcule o valor total da compra de um
//cliente. Deve ser mostrado o nome do cliente. O número de cada tipo de peça
//que o mesmo comprou, o total de desconto e o total a pagar pela compra.

#include <stdio.h>
#include <string.h>
int main () {
    char nome [10],peca [20];
    float p=5.0,po=4.0,arr=3.0,q1,q2,q3;
    int qu;
    printf("PARAFUSOS:5 REAIS\n");
    printf("PORCAS:4 REAIS\n");
    printf("ARRUELAS:3 REAIS\n");
    
    while (1) {
        printf ("\nQual o seu nome:");
        fgets (nome,10,stdin);
        fflush(stdin);
        
        printf ("Qual peça voçe quer:");
        fgets(peca,20,stdin);
        fflush(stdin);
        peca[strcspn(peca, "\n")] = 0;
        
        printf ("Quantas peças voçe quer:");
        scanf ("%d", &qu);
        getchar ();
        
        if (strcmp(peca,"parafuso") ==0 || strcmp(peca,"parafusos") ==0) {
        q1=(qu*p) * 0.80;
        printf ("Seu nome:%s\n", nome);
        printf ("VOÇE ESCOLHEU PARAFUSO, %d Peças\n",qu);
        printf ("VOÇE OBTEU 20% DE DESCONTO!\n");
        printf ("Valor a pagar:%.2f",q1);
            
        }
        else if (strcmp(peca, "porca") ==0 || strcmp(peca,"porcas") ==0) {
        q2=(qu*po) * 0.90;
        printf ("Seu nome:%s\n", nome);
        printf ("VOÇE ESCOLHEU PORCA, %d Peças\n",qu);
        printf ("VOÇE OBTEU 10% DE DESCONTO!\n");
        printf ("Valor a pagar:%.2f",q2);
            
        }
        else if (strcmp(peca,"arruela")==0 || strcmp(peca,"arruelas") ==0) {
        q3=(qu*arr) * 0.70;
        printf ("Seu nome:%s\n", nome);
        printf ("VOÇE ESCOLHEU ARRUELA, %d Peças\n",qu);
        printf ("VOÇE OBTEU 30% DE DESCONTO!\n");
        printf ("Valor a pagar:%.2f\n",q3);
            
        }
    }
    return 0;
}
