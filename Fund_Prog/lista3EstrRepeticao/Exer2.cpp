//Exercicio 2 -  Aula 8
/* Faça um programa que peça dois números inteiros e gere os números pares que 
estão no intervalo entre eles.*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int num1, num2, i;
	
	printf("Digite dois numeros inteiros:\n");
	scanf("%i %i",&num1 ,&num2);
	fflush(stdin);
	
	printf("Numeros pares entre %i e %i:\n", num1, num2);
	
	if (num1 == num2 || abs(num1 - num2)==1){
		printf("Nao ha nenhum numero par entre esses valores!\n");
		
	}else if( num1 > num2){
		for(i = num2 +1; i < num1; i++) {
			if(i % 2 == 0) {
			printf("%i, ", i);
			
			}
		}
		
	}else if (num1 < num2)
		for(i = num1 + 1; i < num2;  i++) {
			if(i % 2 == 0) {
			printf("%i, ", i);
			}
	}

	return 0;
}
