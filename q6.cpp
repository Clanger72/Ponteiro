#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*Construa um programa que define uma estrutura de peça, que poderá ser usado para outros programas, deverá conter
 atributos como: código, nome, cor, peso, preço. Também uma função entrada de dados e uma função de saídas de dados.*/
 
 typedef char vetor [10][20];
 typedef float vetor2 [10];
 
 typedef struct peca {
 	int codigo[10];
 	vetor nome;
 	vetor cor;
 	vetor2 peso;
 	vetor2 preco;
 }Peca;
 
 void cadastro(Peca *pont){
 	int i;
 	for(i=0; i<3; i++){
 		printf("Digite o código: ");
 		scanf("%d", &pont->codigo[i]);
 		fflush(stdin);
 		printf("Qual o nome: ");
 		gets(pont->nome[i]);
 		fflush(stdin);
 		printf("Qual a cor: ");
 		gets(pont->cor[i]);
 		fflush(stdin);
 		printf("Qual o peso: ");
 		scanf("%f", &pont->peso[i]);
 		fflush(stdin);
 		printf("Qual o preço: ");
 		scanf("%f", &pont->preco[i]);
 		system("cls");
	 }
 }
 
 void imprime(Peca *pont){
 	int i;
 	for(i=0; i<3; i++){
 		printf("Codigo: %d\n", pont->codigo[i]);
 		printf("Nome: %s\n", pont->nome[i]);
 		printf("Cor: %s\n", pont->cor[i]);
 		printf("Peso: %.2f\n", pont->peso[i]);
 		printf("Preço: %.2f\n\n", pont->preco[i]);
	 }
 }
 
 int main(void){
 	setlocale(LC_ALL,"");
 	Peca pont;
 	cadastro(&pont);
 	printf("Cadastro de peças!\n\n");
 	imprime(&pont);
 	return 0;
 }
