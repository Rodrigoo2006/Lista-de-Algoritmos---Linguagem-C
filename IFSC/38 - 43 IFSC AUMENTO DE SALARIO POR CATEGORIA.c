// 43. A empresa irá dar um aumento de salário aos seus funcionários de acordo com a categoria de cada um.
// As categorias e os respectivos aumentos são:
// - Funcionários das categorias A, C, F e H ganharão 10% de aumento sobre o salário.
// - Funcionários das categorias B, D, E, I, J e T ganharão 15% de aumento sobre o salário.
// - Funcionários das categorias K e R ganharão 25% de aumento sobre o salário.
// - Funcionários das categorias L, M, N, O, P, Q e S ganharão 35% de aumento sobre o salário.
// - Funcionários das categorias U, V, X, Y, W e Z ganharão 50% de aumento sobre o salário.
#include <stdio.h>

int main () {

    char nome [50];
    char cg;
    int a,c,f,h,b,d,e,i,j,t,k,r,l,m,n,o,p,q,s,u,v,x,y,w,z;
    float sl;

    printf ("QUAL O SEU NOME:");
    fgets(nome, sizeof(nome), stdin);

    printf ("QUAL O SEU SALARIO:");
    scanf ("%f", &sl);
    
    getchar ();
    printf ("QUAL A SUA CATEGORIA:");
    scanf ("%c", &cg);
    
    if (cg=='a'|| cg== 'c' || cg=='f' || cg=='h') {
        printf ("SEU SALARIO REAJUSTADO E: %.2f",sl*1.10);
    }
    else if (cg=='b'|| cg=='d' || cg=='e' || cg=='i' || cg=='j' || cg=='t') {
        printf ("SEU SALARIO REAJUSTADO E: %.2f",sl*1.15);
    }
    else if (cg=='k'|| cg=='r') {
        printf ("SEU SALARIO REAJUSTADO E: %.2f",sl*1.25);
    }
    else if (cg=='l'|| cg=='m' || cg=='n' || cg=='o' || cg=='p' || cg=='q' || cg=='s') {
        printf ("SEU SALARIO REAJUSTADO E: %.2f",sl*1.35);
    }
    else if (cg=='u'|| cg=='v'|| cg=='x' || cg=='y' || cg=='w' || cg=='z') {
        printf ("SEU SALARIO REAJUSTADO E: %.2f",sl*1.50);
    }
    else {
        printf ("VALOR INVALIDO");
    }
    
    return 0;

}
