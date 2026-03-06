/*4. Construa um programa em C ANSI que leia a, b e c (com a != 0) e calcule as raízes da equação do 2º grau usando uma função bhaskara(float a, float b, float c, float *x1, float *x2) que grave os valores em *x1 e *x2, tratando delta < 0 com uma mensagem “sem raízes reais”.
*/
#include <stdio.h>
#include <math.h>

void bhaskara(float a, float b, float c, float *x1, float *x2);

int main() {
    float a, b, c;
    float x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if(a == 0){
        printf("precisa de diferente de 0.\n");
        return 1;
    }

    bhaskara(a, b, c, &x1, &x2);

    return 0;
}

void bhaskara(float a, float b, float c, float *x1, float *x2){
    float delta;

    delta = b*b - 4*a*c;

    if(delta < 0){
        printf("Nao ha raiz real\n");
    } else {
        *x1 = (-b + sqrt(delta)) / (2*a);
        *x2 = (-b - sqrt(delta)) / (2*a);

        printf("x1 = %.2f\n", *x1);
        printf("x2 = %.2f\n", *x2);
    }
}
