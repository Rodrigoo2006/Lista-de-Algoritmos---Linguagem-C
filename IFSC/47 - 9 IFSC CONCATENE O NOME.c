//9. Faça um algoritmo que:
//a) Leia o nome;
//b) Leia o sobrenome;
//c) Concatene o nome com o sobrenome;
//d) Apresente o nome completo. 

#include <stdio.h>
#include <string.h>
int main() {

char nome [10];
char sobrenome[10];

printf ("Qual o seu nome:");
fgets (nome,10,stdin);
nome[strcspn(nome, "\n")] = '\0';

printf ("Qual o seu sobrenome:");
fgets (sobrenome,10,stdin);
sobrenome[strcspn(sobrenome, "\n")] = '\0';

strcat(nome, " ");
strcat (nome, sobrenome);

printf ("Nome completo:%s",nome);

    return 0;
}
