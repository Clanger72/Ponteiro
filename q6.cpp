#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*Construa um programa que define uma estrutura de pe�a, que poder� ser usado para outros programas, dever� conter
 atributos como: c�digo, nome, cor, peso, pre�o. Tamb�m uma fun��o entrada de dados e uma fun��o de sa�das de dados.*/
 
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
 		printf("Digite o c�digo: ");
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
 		printf("Qual o pre�o: ");
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
 		printf("Pre�o: %.2f\n\n", pont->preco[i]);
	 }
 }
 
 int main(void){
 	setlocale(LC_ALL,"");
 	Peca pont;
 	cadastro(&pont);
 	printf("Cadastro de pe�as!\n\n");
 	imprime(&pont);
 	return 0;
 }
