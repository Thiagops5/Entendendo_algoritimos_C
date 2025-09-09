#include <stdio.h>

int main() {
    int dia;
    char *dias_da_semana[] = {
        "Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira",
        "Quinta-feira", "Sexta-feira", "Sabado"
    };
    
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

  
    while (dia < 1 || dia > 7) {
        printf("Valor invalido. O numero deve estar entre 1 e 7. Tente novamente: ");
        scanf("%d", &dia);
    }

    
    printf("%s\n", dias_da_semana[dia - 1]);

    return 0;
}