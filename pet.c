#include <stdio.h>


int main() {
    char nome_pet[50], raca_pet[50];
    
    printf("Qual o nome do Pet? ");
    scanf(" %s", nome_pet);

    printf("Qual a raca do Pet? ");
    scanf(" %s", raca_pet);
   
    for (int i = 1; i <= 15; i++) {
        printf("[%d] O Pet %s eh um(a) %s.\n", i, nome_pet, raca_pet);
    }
    
    return 0;
}