
#include <stdio.h>

int main() {
    
    int idade;
    
    printf("DIGITE A SUA IDADE:");
    scanf ("%d", &idade);
    
    if (idade >=5 && idade <= 10) {
        printf ("INFANTIL");
    }
    if (idade >=11 && idade <= 15) {
        printf ("JUVENIL");
    }
    if (idade >=16 && idade <= 20) {
        printf ("JUNIOR");
    }
    if (idade >=21 && idade <= 25) {
        printf ("PROFISSIONAL");
    }
    if (idade >25) {
        printf ("IDADE INVALIDA");
    }
    return 0;
}
