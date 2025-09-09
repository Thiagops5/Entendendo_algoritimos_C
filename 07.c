#include <stdio.h>

int main() {
    int inicio, fim;

    printf("Digite o valor INICIAL do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o valor FINAL do intervalo: ");
    scanf("%d", &fim);

    int i = inicio;
    while (i <= fim) {
        if (i % 2 == 0) {
            printf("%d eh PAR\n", i);
        } else {
            printf("%d eh iMPAR\n", i);
        }
        i++;
    }
    
    return 0;
}