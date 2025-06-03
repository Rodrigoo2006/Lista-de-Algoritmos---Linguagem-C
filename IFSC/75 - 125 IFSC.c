//125. Faça um algoritmo que leia o número de andares de um prédio e, a seguir, para
//cada andar do prédio, leia o número de pessoas que entraram e saíram do
//elevador.
//Considere que o elevador está vazio e está subindo, os dados se referem a
//apenas uma “subida” do elevador e que o número de pessoas dentro do
//elevador sempre será maior ou igual a 0.
//Se o número de pessoas, após a entrada e saída for maior que 15, deve ser
//mostrada a mensagem “EXCESSO DE PASSAGEIROS . DEVEM SAIR" em
//seguida, o número de pessoas que devem sair do elevador, de modo que seja
//obedecido o limite de 15 passageiros.
//Após a entrada de pessoas no último andar o algoritmo deve mostrar quantas
//pessoas irão descer. 


#include <stdio.h>

int main () {
    int ad;        
    int pe, ps;    
    int total = 0; 

    printf("Quantos andares: ");
    scanf("%d", &ad);

    for (int k = 1; k <= ad; k++) {
        printf("Andar %d\n", k);

        printf("Quantas pessoas entraram no elevador: ");
        scanf("%d", &pe);
        total += pe;

        printf("Quantas pessoas saíram do elevador: ");
        scanf("%d", &ps);
        total -= ps;

        if (total > 15) {
            int excesso = total - 15;
            printf("EXCESSO DE PASSAGEIROS. DEVEM SAIR %d\n", excesso);
            total = 15; 
        }

        if (total < 0) {
            total = 0; 
        }
    }

    printf("Ao final da subida, %d pessoas irão descer.\n", total);

    return 0;
}
