//111. Foi feita uma pesquisa com um grupo de alunos de uma universidade, na qual
//se perguntou para cada aluno o número de vezes que utilizou o restaurante da
//universidade no último mês. Construa um algoritmo que determine:
//a) O percentual de alunos que utilizaram menos que 10 vezes o restaurante;
//b) O percentual de alunos que utilizaram entre 10 e 15 vezes;
//c) O percentual de alunos que utilizaram o restaurante acima de 15 vezes. 

#include <stdio.h>

int main() {
    int qdv=0,q1=0;
    int v1=0,v2=0,v3=0;
    float po1=0,po2=0,po3=0;
    
    printf ("DIGITE UM NUMERO NEGATIVO PARA ENCERRAR!!\n");
    
    while (1) {
    printf("Voçe utilizou quantas vezes o restaurante da universidade:");
    scanf ("%d",&qdv);
    if (qdv<0) {
        break;
    }
    q1++;
    
    if (qdv<10) {
    v1++;
    }
    else if (qdv >=10 && qdv <=15) {
        v2++;
    }
    else if (qdv >15) {
        v3++;
    }
po1 = (v1/(float)q1) *100.0;
po2 = (v2/(float)q1)*100.0;
po3 = (v3/(float)q1)*100.0;
}
printf ("Percentual de alunos que utilizaram menos que 10 vezes o restaurante:%.2f\n",po1);
printf ("percentual de alunos que utilizaram entre 10 e 15 vezes:%.2f\n",po2);
printf ("percentual de alunos que utilizaram o restaurante acima de 15 vezes:%.2f\n",po3);
    return 0;
}
