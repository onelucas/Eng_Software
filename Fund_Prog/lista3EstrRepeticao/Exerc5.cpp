//exercicio 4 - aula 9

#include <stdio.h>

int main(void) {
    int qtdTurmas, i, alunos;
    float soma = 0, media;

    printf("Digite a quantidade de turmas: ");
    scanf("%d", &qtdTurmas);
    fflush(stdin);

    for (i = 1; i <= qtdTurmas; i++) {
        do {
            printf("Digite o numero de alunos da turma %d (max 40): ", i);
            scanf("%d", &alunos);
            fflush(stdin);
            if (alunos > 40)
                printf("Erro! A turma nao pode ter mais de 40 alunos.\n");
        } while (alunos > 40);

        soma += alunos;
    }

    media = soma / qtdTurmas;
    printf("A media de alunos por turma e: %.2f\n", media);

    return 0;
}
