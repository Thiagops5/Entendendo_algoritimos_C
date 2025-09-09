#include <stdio.h>

int main() {
    int numero;
    
    printf("Qual tabuada voce deseja ver? ");
    scanf("%d", &numero);
    
    printf("\n Tabuada do %d \n", numero);
    int i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    }
    
    return 0;
}