//Exercicio 5 -  Aula 9

#include <stdio.h>

int main(void) {
    int qtdCDs, i;
    float valor, total = 0, media;

    printf("Digite a quantidade de CDs: ");
    scanf("%d", &qtdCDs);
    fflush(stdin);

    for (i = 1; i <= qtdCDs; i++) {
        printf("Digite o valor do CD %d: R$ ", i);
        scanf("%f", &valor);
        fflush(stdin);
        total += valor;
    }

    media = total / qtdCDs;
    printf("Valor total investido: R$ %.2f\n", total);
    printf("Custo medio por CD: R$ %.2f\n", media);

    return 0;
}
