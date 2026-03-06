#include <stdio.h>
#include <ctype.h>

void primeiraMaiuscula(char * nome) {
	if (nome[0] != '\0') {
		nome[0] = toupper(nome[0]);
	}
}

int main(){
	char nome[50];
	
	printf("Digite um nome: ");
	scanf(" %[^\n]", nome);
	
	primeiraMaiuscula(nome);
	
	printf("Nome formatado: %s\n", nome);
	
	return 0;
}
