//78. Faça um programa que lê quatro valores: I, A, B e C, onde I é um número inteiro
//e positivo e A, B, e C são quaisquer valores reais. O programa deve escrever os
//valores lidos e:
//• se I = 1, escrever os três valores A, B e C em ordem crescente;
//• se I = 2, escrever os três valores A, B e C em ordem decrescente;
//• se I = 3, escrever os três valores A, B, e C de forma que o maior valor fique
//entre os outros dois;
//• se I não for um dos três valores acima, dar uma mensagem indicando isto
#include <stdio.h>

int main() {
    int i, a, b, c, temp;

    printf("Digite um valor (1, 2 ou 3): ");
    scanf("%d", &i);

    printf("Digite um valor A: ");
    scanf("%d", &a);

    printf("Digite um valor B: ");
    scanf("%d", &b);

    printf("Digite um valor C: ");
    scanf("%d", &c);

    if (i == 1) {
     
        if (a > b) { temp = a; a = b; b = temp; }
        if (a > c) { temp = a; a = c; c = temp; }
        if (b > c) { temp = b; b = c; c = temp; }
        printf("Ordem crescente: %d %d %d\n", a, b, c);
    } else if (i == 2) {
      
        if (a > b) { temp = a; a = b; b = temp; }
        if (a > c) { temp = a; a = c; c = temp; }
        if (b > c) { temp = b; b = c; c = temp; }
        printf("Ordem decrescente: %d %d %d\n", c, b, a);
    } else if (i == 3) {
       
        if (a >= b && a >= c) {
            printf("Maior no meio: %d %d %d\n", b, a, c);
        } else if (b >= a && b >= c) {
            printf("Maior no meio: %d %d %d\n", a, b, c);
        } else {
            printf("Maior no meio: %d %d %d\n", a, c, b);
        }
    } else {
        printf("Número digitado errado, precisa ser 1, 2 ou 3\n");
    }

    return 0;
}
