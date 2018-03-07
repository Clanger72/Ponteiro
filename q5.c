#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef char vetor[10][40];
typedef float vetor2[10];

typedef struct animal{
	vetor raca;
	vetor cor;
	vetor2 peso;
	vetor sexo;	
}Animal;

void cadastre(Animal *pont){
	int i;
	for(i=0; i < 3; i++){
		printf("Digite a raça: ");
		scanf("%s", pont->raca[i]);
		fflush(stdin);
		printf("Digite a cor: ");
		scanf("%s", pont->cor[i]);
		fflush(stdin);
		printf("Digite o peso: ");
		scanf("%f", &pont->peso[i]);
		fflush(stdin);
		printf("Digite o sexo: ");
		scanf("%s", pont->sexo[i]);
		system("cls");
	}
}

void imprima(Animal *pont){
	int i;
	for(i=0; i<3; i++){
		printf("Raça - %s\n", pont->raca[i]);
		printf("Cor - %s\n", pont->cor[i]);
		printf("Peso - %.2f\n", pont->peso[i]);
		printf("Sexo - %s\n\n", pont->sexo[i]);
	}
}

int main(void){
	setlocale(LC_ALL,"");
	Animal pont;
	cadastre(&pont);
	imprima(&pont);
	return 0;
}
