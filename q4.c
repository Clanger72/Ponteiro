#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct pessoa{
	char nome [20];
	int idade;
	float altura;
	float peso;	
}Pessoa;

void inserirDados(Pessoa *pont){
	printf("Digite seu nome: ");
	scanf("%s", pont->nome);
	fflush(stdin);
	printf("Qual sua idade: ");
	scanf("%d", &pont->idade);
	fflush(stdin);
	printf("Qual sua altura: ");
	scanf("%f", &pont->altura);
	fflush(stdin);
	printf("Qual seu peso: ");
	scanf("%f", &pont->peso);
	fflush(stdin);
}

void imprimirDados(Pessoa *pont){
	printf("Nome: %s \tIdade: %d \tAltura: %.2f \t Peso: %.2f", pont->nome, pont->idade, pont->altura, pont->peso);
	//return 0;
}

int main(void){
	setlocale(LC_ALL,"");
	Pessoa pont;
	inserirDados(&pont);
	imprimirDados(&pont);
	return 0;
}
