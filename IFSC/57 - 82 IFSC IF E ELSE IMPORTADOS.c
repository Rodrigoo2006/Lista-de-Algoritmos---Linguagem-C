//82. Construa um algoritmo que, tendo como dados de entrada o preço de um
//produto e um código de origem, mostre o preço junto de sua procedência (ex.
//500,00 – Sul). Caso o código não seja nenhum dos especificados, o produto
//deve ser encarado como importado.
//Código de origem
//1 – Sul //5 ou 6 – Nordeste
//2 – Norte // 7 ou 8 ou 9 – Sudeste
//3 – Leste // 10 até 20 – Centro Oeste
//4 – Oeste // 25 até 35 – Nordeste 
#include <stdio.h>

int main() {
    int cod;
    
    while (1) {
    printf("QUAL O CODIGO:");
    scanf ("%d",&cod);
    
    if (cod ==1) {
        printf ("Sul\n");
    }
    else if (cod ==2) {
        printf ("Norte\n");
    }
    else if (cod == 3) {
        printf ("Leste\n");
    }
    else if (cod==4) {
        printf ("Oeste\n");
    }
    else if (cod >4 && cod <=6) {
        printf ("Nordeste\n");
    }
    else if (cod >6 && cod <=9) {
        printf ("Sudeste\n");
    }
    else if (cod >9 && cod <=20) {
        printf ("Centro oeste\n");
    }
    else if (cod >24 && cod <=35) {
        printf ("Nordeste\n");
    }
    else {
        printf ("Produto importado\n");
    }
}
    return 0;
}
