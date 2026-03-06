#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct  Peca {
	char nome[50];
	int codigo;
	char cor[50];
	float peso;
	float preco;
	
};

void entradaDados(struct Peca *p){
	printf("Nome: ");
	scanf(" %[^\n]", &p->nome);
	fflush(stdin);
	
	printf("Codigo: ");
	scanf("%d", &p->codigo);
	fflush(stdin);
	
	printf("Cor: ");
	scanf(" %[^\n]", &p->cor);
	fflush(stdin);
	
	printf("Peso: ");
	scanf("%f", &p->peso);
	fflush(stdin);
	
	printf("Preco: ");
	scanf("%f", &p->preco);
	fflush(stdin);
}

void exibirDados(struct Peca p){
	printf("\n-- Dados da Peca ---\n");
	printf("Nome: %s\n", p.nome);
	printf("Codigo: %d\n", p.codigo);
	printf("Cor: %s\n", p.cor);
	printf("Peso: %.2f\n", p.peso);
	printf("Preco: %.2f\n", p.preco);
}

int main(){
	struct Peca p;
	
	entradaDados(&p);
	exibirDados(p);
	
	return 0;
}
	
	

