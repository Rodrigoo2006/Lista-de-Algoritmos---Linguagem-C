//6. Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos.
//Os dados utilizados para a contagem dos votos obedecem à seguinte codificação: 1,2,3,4 = voto para os
// respectivos candidatos; 5 = voto nulo; 6 = voto em branco; Elabore um algoritmo que leia o código do
// candidado em um voto. Calcule e escreva: total de votos para cada candidato; total de votos nulos;
// total de votos em branco; Como finalizador do conjunto de votos, tem-se o valor 0

#include <stdio.h>

int main() {
    
    int totvotosA =0,totvotosB =0,totvotosC =0;
    int totvotosD =0,totvotosnulos =0,totvotosbrancos =0;
    int votos = -1;
    
    printf("INFORME 0 PARA ENCERRAR AS ELEIÇOES\n");
    
    while (votos !=0) {
        printf ("INFORME O VOTO:");
        scanf ("%d", &votos);
        
    if (votos == 1)
    totvotosA++;
    else if (votos ==2)
    totvotosB++;
    else if (votos ==3)
    totvotosC++;
    else if (votos ==4)
    totvotosD++;
    else if (votos ==5)
    totvotosnulos++;
    else if (votos ==6)
    totvotosbrancos++;
    else if (votos !=0)
    printf ("VOTO INVALIDO\n");
    }
    printf ("\nRESULTADO DAS ELEIÇOES:\n");
    printf ("VOTOS PARA O CANDIDATO A: %d \n", totvotosA);
    printf ("VOTOS PARA O CANDIDATO B: %d \n", totvotosB);
    printf ("VOTOS PARA O CANDIDATO C: %d \n", totvotosC);
    printf ("VOTOS PARA O CANDIDATO D: %d \n", totvotosD);
    printf ("TOTAL DE VOTOS NULOS: %d \n", totvotosnulos);
    printf ("TOTAL DE VOTOS BRANCOS: %d \n", totvotosbrancos);
    
    
    
    return 0;
}
