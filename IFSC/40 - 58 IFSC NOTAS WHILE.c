// 58. Escreva um algoritmo que leia o código de um aluno e suas três notas. 
// Calcule a média ponderada do aluno, considerando que:
// - O peso para a maior nota é 4;
// - O peso para as duas restantes é 3.
// O algoritmo deve mostrar:
// - O código do aluno;
// - As três notas;
// - A média calculada;
// - Uma mensagem "APROVADO" se a média for maior ou igual a 5;
// - Ou "REPROVADO" se a média for menor que 5.

#include <stdio.h>

int main() {
    
    int cd;
    float n1,n2,n3,media;
    
    while (!0) {
    printf("Digite o seu codigo:");
    scanf ("%d", &cd);
    
    printf ("Digite a sua primeira nota (MAX:4)");
    scanf ("%f", &n1);
    
    if (n1>4) {
        break;
    }
    
    printf ("Digite a sua segunda nota (MAX:3)");
    scanf ("%f", &n2);
    
    if (n1>3) {
        break;
    }
    
    printf ("Digite a sua terceira nota (MAX:3)");
    scanf ("%f", &n3);
    
    if (n1>3) {
        break;
    }
    
    media = (n1+n2+n3) /3;
    
    printf ("O seu codigo e:%d\n", cd);
    printf ("A suas tres notas e:%.2f,%.2f,%.2f\n", n1,n2,n3);
    printf ("A sua media e: %.2f\n", media);
    
    if (media  >=5) {
        printf ("APROVADO !\n");
    }
    else if (media<5) {
        printf ("REPROVADO !\n");
    }
    }
    return 0;
}
