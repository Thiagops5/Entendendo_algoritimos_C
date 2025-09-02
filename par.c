#include <stdio.h>

int main() {
    int inicio, fim;

    printf("Digite o valor INICIAL do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o valor FINAL do intervalo: ");
    scanf("%d", &fim);

    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            printf("%d eh PAR\n", i);
        } else {
            printf("%d eh iMPAR\n", i);
        }
    }
    
    return 0;
}