#include <stdio.h>

int main() {
    int cargo_opcao;
    float salario, bonus = 0.0f;

    printf(" Calculo de Bonus de Natal \n");
    printf("1. Entregador\n2. Vendedor\n3. Supervisor\n4. Gerente\n5. Dono\n");
    printf("Digite o numero do cargo: ");
    scanf("%d", &cargo_opcao);
    printf("Digite o valor do salario: R$ ");
    scanf("%f", &salario);

    
    if (cargo_opcao == 1 && salario >= 0 && salario <= 1500.00) {
        bonus = salario * 0.10f / 100.0f;
    } else if (cargo_opcao == 2 && salario > 1500.00 && salario <= 3800.00) {
        bonus = salario * 0.08f / 100.0f;
    } else if (cargo_opcao == 3 && salario > 3800.00 && salario <= 5500.00) {
        bonus = salario * 0.06f / 100.0f;
    } else if (cargo_opcao == 4 && salario > 5500.00 && salario <= 8700.00) {
        bonus = salario * 0.05f / 100.0f;
    } else if (cargo_opcao == 5 && salario > 8700.00 && salario <= 15000.00) {
        bonus = salario * 0.03f / 100.0f;
    } else {
        printf("Opcao de cargo ou faixa salarial invalida para calculo de bonus.\n");
    }

    if (bonus > 0.0f) {
        printf("O bonus de Natal eh de: R$ %.2f\n", bonus);
    }

    return 0;
}