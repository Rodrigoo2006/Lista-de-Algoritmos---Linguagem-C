#include <stdio.h>

int main() {
    
    float salarioBruto, salarioAposPrevidencia, salarioLiquido;
    float descontoPrevidencia = 10.0;
    float descontoImposto = 5.0;

    printf("Digite o seu salario bruto: ");
    scanf("%f", &salarioBruto);

    salarioAposPrevidencia = salarioBruto * (1 - descontoPrevidencia / 100);
    salarioLiquido = salarioAposPrevidencia * (1 - descontoImposto / 100);

    printf("Seu salario liquido e: %.2f\n", salarioLiquido);

    return 0;
}
