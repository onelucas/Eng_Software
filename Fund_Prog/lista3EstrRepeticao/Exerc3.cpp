// Exercicio 3 - Aula 9
/*Faça um programa que leia dez números inteiros e calcule a diferença entre o maior e o menor número do conjunto. */

#include <stdio.h>

int main(void){
	
	int numeros[10];
	int i;
	int maior, menor;
	
	for (i = 0; i < 10; i++) {	
	printf("Digite o %i numero: \n", i + 1);
	scanf("%i",&numeros[i]);
	fflush (stdin);	
	}
	
	maior =  menor = numeros[0];
	
	for ( i = 1; i < 10; i++) {
		if (numeros[i] > maior) {
			maior = numeros[i];
		}
		if (numeros[i] < menor) {
			menor = numeros[i];
		}
	}
	
	printf("A diferenca entre o maior (%i) e o menor (%i) numero e: %i\n", maior, menor, maior - menor);

	return 0;
}