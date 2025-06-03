#include <stdio.h>

int main() {
    float num1,num2;
    
    printf("Digite o primeiro numero:");
    scanf ("%f", &num1);
    
    printf("Digite o segundo numero:");
    scanf ("%f", &num2);

    if (num1 > num2) {
        printf ("Esse numero e o maior: %2.f", num1);
    }
    else {
        printf ("Esse numero e o maior: %2.f", num2);
    }
    return 0;
}
