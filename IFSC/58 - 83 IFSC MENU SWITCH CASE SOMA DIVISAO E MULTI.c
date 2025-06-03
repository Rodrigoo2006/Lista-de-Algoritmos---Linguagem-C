//83. Crie um algoritmo para uma calculadora utilizando a instrução escolha-caso para
//determinar a operação que deve ser executada, conforme o usuário escolher no
//menu de opções. Conforme a opção escolhida pelo usuário, uma operação
//diferente da calculadora deve ser executada.

#include <stdio.h>

int main () {
    
    int op;
    int a,b;
    
    printf ("1 = MULTIPLICAR\n");
    printf ("2 = SOMAR\n");
    printf ("3 = DIVIDIR\n");
    
    printf ("QUAL DESEJA:");
    scanf ("%d",&op);
    
    switch (op) {
        case 1: {
            printf ("DIGITE UM NUMERO:");
            scanf ("%d",&a);
            printf ("DIGITE OUTRO NUMERO:");
            scanf ("%d",&b);
            
            printf ("%d\n", a*b);
        }
         case 2: {
            printf ("DIGITE UM NUMERO:");
            scanf ("%d",&a);
            printf ("DIGITE OUTRO NUMERO:");
            scanf ("%d",&b);
            
            printf ("%d\n", a+b);
        }
         case 3: {
            printf ("DIGITE UM NUMERO:");
            scanf ("%d",&a);
            printf ("DIGITE OUTRO NUMERO:");
            scanf ("%d",&b);
            
            printf ("%d\n", a/b);
        }
        default:
        break;
    }
    
}
