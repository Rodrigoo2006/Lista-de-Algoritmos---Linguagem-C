//95. Para uma turma de 45 alunos, construa um algoritmo que determine:
//a) A idade média dos alunos com menos de 1,70m de altura;
//b) A altura média dos alunos com mais de 20 anos. 

#include <stdio.h>

int main () {
    
    int idade,somaidade=0;
    float altura,somaaltura,altmedia;
    int c1,al;
    
    for (int i=0;i<45;i++) {
        printf ("QUAL A SUA IDADE:");
        scanf ("%d",&idade);
        printf ("QUAL A SUA ALTURA:");
        scanf ("%f",&altura);
        
        if (altura <1.70) {
        somaidade +=idade;
        c1++;
        }
        if (idade>20) {
            somaaltura +=altura;
            al++;
        }
    }
    if (c1 > 0) {
        float media = (float)somaidade/ c1;
        printf("\nIdade média dos alunos com menos de 1,70m: %.2f anos\n", media); }
        if (idade > 0) {
        float altmedia = (float)somaaltura / al;
        printf("\nA altura média dos alunos com mais de 20 anos: %.2f de Altura\n", altmedia);
}

return 0;
}
