//Exercicio 8 - Aula 9

#include <stdio.h>

int main(void) {
    int anos = 0;
    double paisA = 80000, paisB = 200000;

    while (paisA < paisB) {
        paisA += paisA * 0.03;
        paisB += paisB * 0.015;
        anos++;
    }

    printf("Serao necessarios %d anos para que a populacao do pais A ultrapasse ou iguale a de B.\n", anos);
    printf("Populacao final de A: %.0f\n", paisA);
    printf("Populacao final de B: %.0f\n", paisB);

    return 0;
}
