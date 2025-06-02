//124. Faça um algoritmo que leia informações de alunos (Matricula, Nota1, Nota2 ,
//Nota3) com o fim das informações indicado por Matricula = 9999 . Para cada
//aluno deve ser calculada a média final de acordo com a seguinte fórmula:
//Média final = [(2 * Nota1) +(3* Nota2) +(4* Nota 3)] / 9
//Se a média final for igual ou superior a 5, o algoritmo deve mostrar Matrícula,
//Média Final e a mensagem "APROVADO" ; se a média final for inferior a 5, o
//algoritmo deve mostrar Matricula, Média Final e a mensagem "REPROVADO".
//Ao final devem ser mostrados o total de aprovados, o total de alunos da turma e
//o total de reprovados. 

#include <stdio.h>

int main () {

float n1,n2,n3;
int mat;
float media;
int q1=0,q2=0;

while (1) {
    printf ("Digite a sua matricula:");
    scanf ("%d",&mat);
    
    if (mat ==9999) {
        break;
    }
    q1++;
     
    printf ("Digite a Nota 1:");
    scanf ("%f",&n1);
    
    printf ("Digite a Nota 2:");
    scanf ("%f",&n2);
    
    printf ("Digite a Nota 3:");
    scanf ("%f",&n3);
    
    media = (2 * n1 +3* n2 + 4* n3) /9;
    
    if (media>=5.00) {
    printf ("MATRICULA:%d\n",mat);
    printf ("APROVADO! %.2f\n",media);
    }
    else {
        q2++;
    printf ("REPROVADO! %.2f\n",media);
    printf ("MATRICULA:%d\n",mat);
    }
}
printf ("TOTAL DE ALUNOS:%d\n",q1);
printf ("TOTAL DE ALUNOS REPROVADOS:%d\n",q2);

return 0;
}
