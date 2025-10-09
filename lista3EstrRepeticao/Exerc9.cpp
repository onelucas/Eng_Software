//Exercicio 9 - Aula 9

#include <stdio.h>

int main(void) {
    int i, soma;
    char opcao;

    do {
        soma = 0;
        for (i = 100; i <= 200; i++) {
            if (i % 2 == 0)
                soma += i;
        }

        printf("A soma dos numeros pares entre 100 e 200 e: %d\n", soma);

        printf("Deseja repetir a operacao? (s/n): ");
        scanf(" %c", &opcao);
        fflush(stdin);

    } while (opcao == 's' || opcao == 'S');

    return 0;
}
