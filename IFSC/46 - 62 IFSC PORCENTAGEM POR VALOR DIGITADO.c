// 62. Um banco concederá um crédito especial aos seus clientes, variável com o saldo
//médio no último ano. Faça um algoritmo que leia o saldo médio de um cliente e
//calcule o valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem
//informando o saldo médio e o valor do crédito.
//Saldo médio Percentual
//de 0 a 200 nenhum crédito
//de 201 a 400 20% do valor do saldo médio
//de 401 a 600 30% do valor do saldo médio
//acima de 601 40% do valor do saldo médio

#include <stdio.h>

int main() {
    
    float sl;
    float po1,po2,po3;
    
    while (1) {
    printf("Qual o seu saldo medio:");
    scanf ("%f",&sl);
    
    if (sl >=0 && sl <=200) {
        printf ("nenhum crédito\n");
    }
    else if (sl >200 && sl <=400) {
    po1 = sl * (20.0/100.0);
    printf ("Credito disponivel:%.2f\n",po1);
    }
    else if (sl >400 && sl <=600) {
    po2 = sl * (30.0/100.0);
    printf ("Credito disponivel:%.2f\n",po2);
    }
    else if (sl >600) {
    po3 = sl * (40.0/100.0);
    printf ("Credito disponivel:%.2f\n",po3);
    }
}
    return 0;
}
