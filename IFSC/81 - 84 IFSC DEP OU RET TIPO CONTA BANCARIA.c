//84. Crie um algoritmo que execute as funcionalidades da conta-corrente de uma
//pessoa. Toda a conta tem um número, uma pessoa vinculada e um saldo. O
//saldo é atualizado conforme o tipo de movimentação bancária: depósito ou
//retirada. Se for um depósito, o dinheiro é creditado ao saldo; se for retirada, o
//dinheiro é debitado do saldo.

#include <stdio.h>

int main() {

float saldo=00.00;
float dep,ret;
int op;
float sn;
int num;


    printf ("DIGITE O SEU NUMERO:");
    scanf ("%d",&num);
    
    printf ("\nSEU SALDO:%2f\n",saldo);
    printf ("\n1 - DEPOSITO\n");
    printf ("2 - RETIRADA\n");
    
    printf ("\nQUAL VOÇE DESEJA:");
    scanf ("%d",&op);
    
    if (op==1) {
        printf ("\nQUANTO DESEJA DEPOSITAR:");
        scanf ("%f",&dep);
        sn = dep +saldo;
        printf ("SEU SALDO ATUAL:%.2f\n",sn);
    }
    
    if (op==2) {
        printf ("\nQUANTO DESEJA RETIRAR:");
        scanf ("%f",&ret);
        printf ("SALDO ATUAL:%2.f\n",saldo-ret);
    }


    
    

    return 0;
}