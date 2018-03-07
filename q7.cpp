#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*Fa�a um programa que pe�a um n�mero para calcular o fatorial. Deve tem uma fun��o para calcular o fatorial (por refer�ncia).*/


typedef struct fatorial{
	int fator, result;
}Fatorial;

void fatorar (Fatorial *f){
	int i;
	i = f->fator;
	for(f->result=1; i>1; i--){
		f->result=f->result*i;
	}
	printf("Resultado: %d", f->result);
}

int main (void){
	setlocale(LC_ALL,"");
	Fatorial f;
	printf("Digite o termo a ser fatorado: ");
	scanf("%d", &f.fator);
	printf("\n");
	fatorar(&f);
	return 0;
}
