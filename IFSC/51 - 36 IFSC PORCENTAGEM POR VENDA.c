//36. Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma 

//comissão calculada de acordo com o valor de suas vendas. Se o valor da venda 

//de um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor 
//vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 
//50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro 
//caso, a comissão será de 7%. Escreva um algoritmo que gere um relatório 
//contendo nome, valor da venda e comissão de cada um dos corretores. O 
//relatório deve mostrar também o total de vendas da empresa.

#include <stdio.h>
#include <string.h>

int main () {
    int i;
    float valor1,po1,po2,po3;
    char nome[10];
    
    for (i=0;i<3;i++) {
        
        printf ("Qual o seu nome:");
        fgets (nome,10,stdin);
        fflush(stdin);
        getchar();
        
        printf ("Quanto você vendeu:");
        scanf ("%f",&valor1);
        
        
        if (valor1 > 50.000) {
            po1 = valor1 * (12.0/100.0);
            printf ("Seu nome é:%s",nome);
            printf ("Sua venda:%.3f\n",valor1);
            printf ("Sua comissão é:%.3f\n",po1);
        }
        
        else if (valor1>=30.000 && valor1 <=50.000) {
        po3 = valor1 * (9.5/100.0);
        printf ("Seu nome é:%s",nome);
        printf ("Sua venda:%.3f\n",valor1);
        printf ("Sua comissão é:%f\n",po3);
        }
        
        else {
            po2 = valor1 * (7.00/100.0);
            printf ("Seu nome é:%s",nome);
            printf ("Sua venda:%.3f\n",valor1);
            printf ("Sua comissão é:%.3f\n",po2);
            
        }
    }
    return 0;
}
