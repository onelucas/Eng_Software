/*10. Implemente um programa em C ANSI que leia um nome em uma string e crie uma função primeiraMaiuscula(char *nome) que altere o primeiro caractere para maiúsculo somente se for letra minúscula, recebendo a string por referência.
*/
#include <stdio.h>
#include <stdlib.h>

void primeiraMaiuscula(char *nome);

int  main(void){
	char nome [50];
	
	printf("Digite o nome: ");
	gets(nome);
	
	primeiraMaiuscula(nome);
	
	printf("Nome e %s\n", nome);
	
	return 0;
}

void primeiraMaiuscula(char *nome){
	if(nome[0]>='a' && nome[0]<='z'){
		nome[0]-=32;
	}
}

