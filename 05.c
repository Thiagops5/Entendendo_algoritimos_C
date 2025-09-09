#include <stdio.h>

int main() {
    float valores[3];
    float maior;
    int i;

    printf("Digite tres valores numericos: ");
    scanf("%f %f %f", &valores[0], &valores[1], &valores[2]);

    
    maior = valores[0];
    
    
    i = 1;
    while (i < 3) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
        i++;
    }


    printf("O maior valor eh: %.f\n", maior);

    return 0;
}