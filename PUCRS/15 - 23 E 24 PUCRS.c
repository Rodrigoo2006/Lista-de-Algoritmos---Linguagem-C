//23 e 24 - MAIOR IDADE, PESSOAS ENTRE CONDIÇAO.
#include <stdio.h>
#include <string.h>

int main() {
    char sexo[10];
    char olhos[10];
    char cabelos[10];
    char azul=0,verde=0,castanho=0;
    char masc=0,fem=0;
    char louro=0,castanhu=0,preto=0;
    int idade,maior=0;
    int id=0;
    int v1=0;
    
    printf ("DIGITE NUMERO NEGATIVO NA IDADE PARA ENCERRAR\n");
    while (1) {
        
    printf ("\nDigite a sua idade:");
    scanf ("%d", &idade);
    
    if (idade <0) {
    break;
    }
    id++;
    
    if (idade>maior) {
        maior=idade;
    }
    
    getchar();
    
    printf("Digite o seu sexo:");
    fgets (sexo,10,stdin);
    
    if (sexo == "feminino") {
        fem++;
    }
    else if (sexo== "masculino") {
        masc++;
    }
    getchar();
    
    printf("Digite a cor dos seus olhos:");
    fgets (olhos,10,stdin);
    
    if (olhos == "azul") {
        azul++;
    }
    else if (olhos=="castanho") {
        castanho++;
    }
    else if (olhos=="verde") {
        verde++;
    }
    
    getchar();
    
    printf("Digite a cor dos seus cabelos:");
    fgets (cabelos,10,stdin);
    
    if (cabelos == "preto") {
        preto++;
    }
    else if (cabelos=="castanho") {
        castanhu++;
    }
    else if (cabelos=="loiro") {
        louro++;
    }
    
    if (idade >= 18 && idade <= 35 && strcmp(olhos, "verde\n") == 0 && strcmp(sexo, "feminino\n") == 0 && strcmp(cabelos, "loiro\n") == 0) {
    v1++;
    }
    }
    
    printf ("PESSOAS DO SEXO FEMININO ENTRE 18 A 35 COM OLHO VERDE E CABELO LOIRO:%d",v1);
    printf ("\nMAIOR IDADE:%d\n",maior);
    return 0;
}
