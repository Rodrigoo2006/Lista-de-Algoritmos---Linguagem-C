// 45. Escreva um algoritmo que, para uma conta bancária, leia o seu número, o saldo, 

//o tipo de operação a ser realizada (depósito ou retirada) e o valor da operação. 

//Após, determine e mostre o novo saldo. Se o novo saldo ficar negativo, deve ser 
//mostrada, também, a mensagem “conta estourada”.

#include <stdio.h>
#include <string.h>

int main() {
    int num;
    float saldo,saque,deposito;
    char dep[10];
    
    while (1) {
    printf("Qual o número da sua conta bancária:");
    scanf ("%d", &num);
    while (getchar() != '\n');
    
    if (num >34) {
    saldo = 300.00; 
    }
    else if (num<34) {
        saldo = 678.00;
    }
    
    printf ("Seu saldo:%2.f\n",saldo);
    
    printf ("Deseja depositar ou sacar:");
    fgets(dep,10,stdin);
    dep[strcspn(dep, "\n")] = '\0';
    fflush(stdin);
    getchar();
    
    if (strcmp(dep, "depositar")==0) {
    printf ("Quando deseja depositar:");
    scanf ("%f",&deposito);
    saldo +=deposito;
    printf ("Valor atualizado:%.2f\n", saldo);
    if (saldo <0) {
        printf ("Conta estourada");
    }
    
    }
    if (strcmp(dep,"sacar")==0) {
    printf ("Quando deseja sacar:");
    scanf ("%f",&saque);
    saldo -=saque;
    printf ("Valor atualizado:%.2f\n", saldo);
    if (saldo <0) {
        printf ("Conta estourada\n");
    }
    
    }
    }
    
    

    return 0;
}
