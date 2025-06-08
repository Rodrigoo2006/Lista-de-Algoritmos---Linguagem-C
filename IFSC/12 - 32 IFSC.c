#include <stdio.h>

int main() {
    
    int n;
    printf("Digite um numero:");
    scanf ("%d", &n);
    
    if (n <=10) {
        printf ("F1");
    }
    if (n >10 && n <=100) {
        printf ("F2");
    }
    if (n >100){
        printf ("F3");
    }
    return 0;
}
