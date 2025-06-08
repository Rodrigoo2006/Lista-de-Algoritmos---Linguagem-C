
#include <stdio.h>

int main() {
    
float num1,num2,num3,menor;
    
printf("Digite o primeiro numero:");
scanf ("%f", &num1);
    
printf("Digite o segundo numero:");
scanf ("%f", &num2);
    
printf("Digite o terceiro numero:");
scanf ("%f", &num3);

menor = num1;

if (num2 < menor) {
 menor = num2;
}
if (num3 < menor) {
 menor = num3;
}
   
printf ("Esse e o menor: %2.f", menor);
   
return 0;
}
