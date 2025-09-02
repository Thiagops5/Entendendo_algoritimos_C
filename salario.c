//1) Desenvolva um algoritmo em linguagem de programação C/C++, que pergunte o nome
//o funcionário, o valor do salário bruto e o valor dos descontos com impostos do Governo e
//o valor do vale. Calcule o valor líquido do salário. O banco concede 30% de empréstimo
//sobre o valor do salário líquido, caso seja maior que R$ 0,00. Imprima separadamente, os
//valores: salário bruto, impostos, vale, salario líquido, valor do empréstimo e o valor do
//salário final (líquido+empréstimo).

#include <stdio.h>

int main()
{
    float salarioBruto, impostos, vale, salarioLiquido, emprestimo, salarioFinal;
    char nome[50];

    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);

    printf("Digite o valor do salario bruto: ");
    scanf("%f", &salarioBruto);

    printf("Digite o valor dos descontos com impostos do Governo: ");
    scanf("%f", &impostos);

    printf("Digite o valor do vale: ");
    scanf("%f", &vale);

    salarioLiquido = salarioBruto - impostos - vale;

    if (salarioLiquido > 0) {
        emprestimo = 0.30 * salarioLiquido;
    } else {
        emprestimo = 0.0;
    }

    salarioFinal = salarioLiquido + emprestimo;

    printf("\n--- Detalhes do Salário ---\n");
    printf("Nome do funcionário: %s\n", nome);
    printf("Salário Bruto: R$ %.2f\n", salarioBruto);
    printf("Descontos (Impostos): R$ %.2f\n", impostos);
    printf("Vale: R$ %.2f\n", vale);
    printf("Salário Líquido: R$ %.2f\n", salarioLiquido);
    printf("Valor do Empréstimo: R$ %.2f\n", emprestimo);
    printf("Salário Final (Líquido + Empréstimo): R$ %.2f\n", salarioFinal);



    return 0;
}