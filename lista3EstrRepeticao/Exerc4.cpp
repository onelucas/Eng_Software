//Exercicio 4 -  Aula 9	
/*Faça um programa que calcule e mostre a média bimestral da turma. O usuário deve informar a quantidade de notas, bem como cada nota. */

#include <stdio.h>

int main(void){
	
	int qtdNotas, i;
	float nota, soma = 0.0, media;
	
	printf("Digite a quantidade de notas da turma: \n");
	scanf("%i",&qtdNotas);
	
	if(qtdNotas <= 0){
		printf("Quantidade de notas invalidas.\n");
		return 1;
	}
	
	for (i = 1; i <= qtdNotas; i++) {
		printf("Digite a nota %d: \n", i);
		scanf("%f",&nota);
		
		if (nota <0 || nota > 10) {
			printf("Nota invalida\n");
			i--;
			continue;
		}
		
		soma += nota;
	}
	
	media = soma / qtdNotas;
	
	printf(" A media bimestral da turma e: %.2f\n", media);

	return 0;
}