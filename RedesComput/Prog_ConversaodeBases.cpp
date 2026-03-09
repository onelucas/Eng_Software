#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int validarBinario(char num[]) {
    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] != '0' && num[i] != '1')
            return 0;
    }
    return 1;
}

int validarDecimal(char num[]) {
    for (int i = 0; num[i] != '\0'; i++) {
        if (!isdigit(num[i]))
            return 0;
    }
    return 1;
}

int validarHexadecimal(char num[]) {
    for (int i = 0; num[i] != '\0'; i++) {
        if (!isdigit(num[i]) && !(toupper(num[i]) >= 'A' && toupper(num[i]) <= 'F'))
            return 0;
    }
    return 1;
}

int main() {

    int origem, destino;
    char numero[50];
    long decimal;

    printf("Sistemas de numeracao:\n");
    printf("1 - Binario\n");
    printf("2 - Decimal\n");
    printf("3 - Hexadecimal\n");

    printf("\nEscolha o sistema de ORIGEM: ");
    scanf("%d", &origem);

    printf("Escolha o sistema de DESTINO: ");
    scanf("%d", &destino);

    if (origem == destino) {
        printf("Erro: origem e destino nao podem ser iguais.\n");
        return 0;
    }

    printf("Digite o numero de origem: ");
    scanf("%s", numero);

    if (origem == 1 && !validarBinario(numero)) {
        printf("Numero binario invalido.\n");
        return 0;
    }

    if (origem == 2 && !validarDecimal(numero)) {
        printf("Numero decimal invalido.\n");
        return 0;
    }

    if (origem == 3 && !validarHexadecimal(numero)) {
        printf("Numero hexadecimal invalido.\n");
        return 0;
    }

    if (origem == 1)
        decimal = strtol(numero, NULL, 2);

    if (origem == 2)
        decimal = strtol(numero, NULL, 10);

    if (origem == 3)
        decimal = strtol(numero, NULL, 16);

    printf("\nResultado da conversao:\n");

    if (destino == 1)
        printf("Binario: %lX\n", decimal);

    if (destino == 2)
        printf("Decimal: %ld\n", decimal);

    if (destino == 3)
        printf("Hexadecimal: %lX\n", decimal);

    return 0;
}