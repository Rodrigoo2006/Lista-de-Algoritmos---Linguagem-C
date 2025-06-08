//55. Calcule a média aritmética das três notas de um aluno e mostre, além do valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 7; a mensagem “em prova final” caso a média seja menor que 7 e maior ou igual a 4; e "reprovado", caso contrário.

#include <stdio.h>

int main() {
    
    float n1,n2,n3,media;
    
    printf("DIGITE A SUA PRIMEIRA NOTA:");
    scanf ("%f", &n1);
    
    printf("DIGITE A SUA SEGUNDA NOTA:");
    scanf ("%f", &n2);
    
    printf("DIGITE A SUA TERCEIRA NOTA:");
    scanf ("%f", &n3);
    
    media = (n1 + n2 + n3) /3;
    
    printf ("A SUA MEDIA E: %.2f \n",media);
    
    if (media >=7) {
        printf ("APROVADO");
    }
    else if (media <7 && media >=4) {
        printf ("PROVA FINAL");
    }
    else {
        printf ("REPROVADO");
    }

    return 0;
}
