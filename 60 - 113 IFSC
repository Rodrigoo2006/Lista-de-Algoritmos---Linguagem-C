//113. Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas e
//apresente o nome e peso da mais pesada e o nome e altura da mais alta. 

#include <stdio.h>
#include <string.h>
int main () {
    
    char nome[20],nome2[20];
    float peso,peso2,altura,altura2;
    
  
    printf ("Qual o seu nome(Pessoa 1):");
    fgets (nome,20,stdin);
    nome[strcspn(nome, "\n")] = '\0';
    getchar();
        
    printf ("Qual o seu peso(Pessoa 1):");
    scanf ("%f",&peso);
    getchar();
    
    printf ("Qual a sua altura (Pessoa 1):");
    scanf ("%f",&altura); 
    getchar();
    
    printf ("\nQual o seu nome(Pessoa 2):");
    fgets (nome2,20,stdin);
    nome2[strcspn(nome2, "\n")] = '\0';
    getchar();
        
    printf ("Qual o seu peso(Pessoa 2):");
    scanf ("%f",&peso2);
    getchar();
    
    printf ("Qual a sua altura (Pessoa 2):");
    scanf ("%f",&altura2);
    getchar();
     
    printf ("\nMAIS PESADA\n");
    if (peso>peso2) {
        printf ("NOME:%s\n",nome);
        printf ("PESO:%2.fKG\n",peso);
    }
    else if (peso2>peso) {
        printf ("NOME:%s\n",nome2);
        printf ("PESO:%2.fKG\n",peso2);
    }
    
  printf ("\nMAIS ALTA\n");
    if (altura>altura2) {
        printf ("NOME:%s\n",nome);
        printf ("ALTURA:%.2f\n",altura);
    }
    else if (altura2>altura) {
        printf ("NOME:%s\n",nome);
        printf ("ALTURA:%.2f\n",altura2);
    }
    return 0;
}
