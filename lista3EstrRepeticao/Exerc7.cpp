//Exercicio 7 -  Aula 9

#include <stdio.h>

int main(void) {
    int num, i;

    printf("Digite o numero que deseja ver a tabuada: ");
    scanf("%d", &num);
    fflush(stdin);

    printf("Tabuada do %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
