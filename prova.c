#include <stdio.h>

int main() {
    char nome_aluno[100];
    float t1, t2, t3, t4, t5, prova;

    printf("Nome do aluno: ");
    scanf("%s", nome_aluno);

    printf("Digite as 5 notas dos trabalhos (cada um valendo 20):\n");
    scanf("%f %f %f %f %f", &t1, &t2, &t3, &t4, &t5);

    printf("Digite a nota da prova (valendo 100): ");
    scanf("%f", &prova);

    float soma_trabalhos = t1 + t2 + t3 + t4 + t5;
    float media_geral = (soma_trabalhos + prova) / 2.0f;

    printf("\n Boletim \n");
    printf("Aluno: %s\n", nome_aluno);
    printf("Media Geral: %.1f\n", media_geral);

    printf("Situacao: ");
    if (media_geral >= 60 && media_geral <= 100) {
        printf("Aprovado\n");
    } else if (media_geral >= 40 && media_geral < 60) {
        printf("Recuperacao\n");
    } else if (media_geral >= 0 && media_geral < 40) {
        printf("Reprovado\n");
    } else {
        printf("Media invalida.\n");
    }
    
    return 0;
}