// 9. Faça um algoritmo que:
// a) Leia o nome;
// b) Leia o sobrenome;
// c) Concatene o nome com o sobrenome;
// d) Apresente o nome completo.

#include <stdio.h>
#include <string.h>

int main() {
    
    char n1[40],n2[20];
    
    printf ("DIGITE UM NOME:");
    scanf ("%19s", &n1);
    fflush (stdin);
    
    printf ("DIGITE O SOBRENOME:");
    scanf ("%19s", &n2);
    fflush (stdin);
    
    strcat (n1," ");
    strcat (n1, n2);
    
    puts (n1);
    return 0;
}
