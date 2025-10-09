//Exercicio 10 - Aula 9

#include <stdio.h>
#include <math.h>

int main(void) {
    int base, expoente;
    double resultado;

    printf("Digite a base: ");
    scanf("%d", &base);
    fflush(stdin);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    fflush(stdin);

    resultado = pow(base, expoente);
    printf("%d elevado a %d = %.2f\n", base, expoente, resultado);

    return 0;
}
