//7. Escreva um algoritmo que calcule a média aritmética
//das 3 notas dos alunos de uma classe. O algoritmo deverá
//ler, além das notas, o código do aluno e deverá ser
//encerrado quando o código for igual a zero.

#include<stdio.h>

int main()
{
    float nota1,nota2,nota3,media,m2;
    int cd1;
    
    printf ("DIGITE 0 NA PARTE DO CÓDIGO PARA ENCERRAR\n");
    
    while (!0) {
    printf ("\nDIGITE SEU CÓDIGO:");
    scanf ("%d",&cd1);
    if (cd1==0) break;
    
    printf ("DIGITE SUA PRIMEIRA NOTA:");
    scanf ("%f",&nota1);
    
    printf ("DIGITE SUA SEGUNDA NOTA:");
    scanf ("%f",&nota2);
    
    printf ("DIGITE SUA TERCEIRA NOTA:");
    scanf ("%f",&nota3);
    
    media = (nota1 + nota2 + nota3) /3;
    
    printf ("SEU CÓDIGO É:%d\n",cd1);
    printf ("MÉDIA ARITMÉTICA:%.2f\n",media);
    
    return 0;
    }
    }
