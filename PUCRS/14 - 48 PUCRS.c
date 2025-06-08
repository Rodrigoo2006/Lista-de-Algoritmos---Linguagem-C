//48. Faça um algoritmo que mostre os conceitos finais dos alunos de uma classe de 75 alunos, considerando (use o comando CASO):
//a) os dados de cada aluno (número de matrícula e nota numérica final) serão fornecidos pelo usuário
//b) a tabela de conceitos segue abaixo:
//Nota Conceito
//de 0,0 a 4,9 D
//de 5,0 a 6,9 C
//de 7,0 a 8,9 B
//de 9,0 a 10,0 A

#include <stdio.h>

int main () {
    int matricula;
    float nota;
    int i=0;
    
    for (i=0;i<75;i++) {
    printf ("QUAL A SUA MATRICULA:");
    scanf ("%d",&matricula);
    
    printf ("Qual a sua nota:");
    scanf ("%f",&nota);
    
    if (nota >=0.0 && nota <=4.9) {
        printf ("VOÇE E DO CONCEITO:D\n");
    }
    else if (nota >=5.0 && nota <=6.9) {
        printf ("VOÇE E DO CONCEITO:C\n");
    }
    else if (nota >=7.0 && nota <=8.9) {
        printf ("VOÇE E DO CONCEITO:B\n");
    }
    else if (nota >=9.0 && nota <=10.0) {
        printf ("VOÇE E DO CONCEITO:A\n");
    }
    }
    return 0;
}
