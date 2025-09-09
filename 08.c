#include <stdio.h>

int main() {
    int inicio, fim;
    int contador = 0;
    long long somatoria = 0; 

    printf("Digite o valor INICIAL do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o valor FINAL do intervalo: ");
    scanf("%d", &fim);

    printf("\nValores no intervalo:\n");
    int i = inicio;
    while (i <= fim) {
        printf("%d ", i);
        somatoria += i; 
        contador++;
        i++;
    }

    if (contador > 0) {
        float media = (float)somatoria / contador;
        
        printf("\n\n Estatisticas \n");
        printf("Quantidade de numeros: %d\n", contador);
        printf("Somatoria dos numeros: %lld\n", somatoria);
        printf("Media dos valores: %.2f\n", media);
    } else {
        printf("\nIntervalo vazio ou invalido.\n");
    }
    
    return 0;
}