//10. Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se a média for menor que 5. Repita a operação até que o código lido seja negativo.


#include <stdio.h>

int main() {
    
    float n1,n2,n3,media;
    int cd;

    while (!0) {
    printf ("DIGITE UM NUMERO NEGATIVO PARA ENCERRAR!\n");
    
    printf("Digite o seu codigo:");
    scanf ("%d", &cd);
    
    if (cd <0) {
        break;
    }
    
    printf("Digite a primeira nota (max:4):");
    scanf ("%f", &n1);
    
    if (n1 <0) {
        break;
    }
    printf("Digite a segunda nota (max:3):");
    scanf ("%f", &n2);
    
    if (n2 <0) {
        break;
    }
    printf("Digite a terceira nota (max:3):");
    scanf ("%f", &n3);
    
    if (n3 <0) {
        break;
    }
    
    media = (n1+n2+n3) /3;
    
    if (media>=5) {
        printf ("APROVADO: %.2f", media);
    }
    else {
        printf ("REPROVADO");
    }
    return 0;
}
}
