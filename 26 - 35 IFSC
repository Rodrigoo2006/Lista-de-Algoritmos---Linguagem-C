//35. Considere que o último concurso vestibular apresentou três provas: Português, Matemática e Conhecimentos Gerais. Considerando que para cada candidato tem-se um registro contendo o seu nome e as notas obtidas em cada uma das provas, construa um algoritmo que forneça: a) o nome e as notas em cada prova do candidato b) a média do candidato c) uma informação dizendo se o candidato foi aprovado ou não. Considere que um candidato é aprovado se sua média for maior que 7.0 e se não apresentou nenhuma nota abaixo de 5.0

#include <stdio.h>

int main () {
    char nome[50];
    float media, pt, mt, cg;

    printf("QUAL É SEU NOME: \n");
    scanf("%s", nome);

    printf("QUAL A SUA NOTA NA PROVA DE PORTUGUÊS: \n");
    scanf("%f", &pt);

    printf("QUAL A SUA NOTA NA PROVA DE MATEMÁTICA: \n");
    scanf("%f", &mt);

    printf("QUAL A SUA NOTA NA PROVA DE CONHECIMENTOS GERAIS: \n");
    scanf("%f", &cg);

    media = (pt + mt + cg) / 3;
    
    printf ("NOME DO ALUNO: %s\n", nome);
    printf ("MEDIA DO CANDIDATO: %.2f\n", media);
    
    if (media >= 7.0 && pt >= 5.0 && mt >= 5.0 && cg >= 5.0) {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
