//17. Faça um algoritmo que leia quatro números e apresente os resultados de adição e multiplicação dos valores entre si,
//baseando-se na utilização da propriedade distributiva, ou seja, se forem lidas as variáveis A, B, C e D, devem ser somadas
// e multiplicadas A com B, A com C e A com D; B com C, B com D e por último C com D. 

#include <stdio.h>

int main() {
  
  int a,b,c,d;
  
  printf ("DIGITE O PRIMEIRO NUMERO:");
  scanf ("%d", &a);
  
  printf ("DIGITE O SEGUNDO NUMERO:");
  scanf ("%d", &b);
  
  printf ("DIGITE O TERCEIRO NUMERO:");
  scanf ("%d", &c);
  
  printf ("DIGITE O QUARTO NUMERO:");
  scanf ("%d", &d);
  
  printf ("Resultado da soma de A + B: %d \n", a+b);
  printf ("Resultado da soma de A + C: %d \n", a+c);
  printf ("Resultado da soma de A + D: %d \n", a+d);
  printf ("Resultado da soma de B + C: %d \n", b+c);
  printf ("Resultado da soma de B + D: %d \n", b+d);
  printf ("Resultado da soma de C + D: %d \n", c+d);
  
  printf ("Resultado da MULTI de A + B: %d \n", a*b);
  printf ("Resultado da MULTI de A + C: %d \n", a*c);
  printf ("Resultado da MULTI de A + D: %d \n", a*d);
  printf ("Resultado da MULTI de B + C: %d \n", b*c);
  printf ("Resultado da MULTI de B + D: %d \n", b*d);
  printf ("Resultado da MULTI de C + D: %d \n", c*d);
  
  return 0;
  
}
