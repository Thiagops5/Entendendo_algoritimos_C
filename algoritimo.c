#include <stdio.h>

int main() {
    float v1, v2, v3;

    printf("Digite tres valores numericos: ");
    scanf("%f %f %f", &v1, &v2, &v3);

    if (v1 >= v2 && v1 >= v3) {
        printf("O maior valor eh: %.f\n", v1);
    } else if (v2 >= v1 && v2 >= v3) {
        printf("O maior valor eh: %.f\n", v2);
    } else {
        printf("O maior valor eh: %.f\n", v3);
    }

    return 0;
}