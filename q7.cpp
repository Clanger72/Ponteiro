#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

/*Faça um programa que peça um número para calcular o fatorial. Deve tem uma função para calcular o fatorial (por referência).*/


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
