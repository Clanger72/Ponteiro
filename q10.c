#include <stdio.h>
#include <stdlib.h>


typedef struct nome{
	char text[40];
}Nome;

void converte(Nome *n){
	n->text[0] = toupper (n->text[0]);
	printf("%s", n->text);
}

int main (void){
	Nome n;
	printf("Digite seu nome: ");
	scanf("%s", n.text);
	fflush(stdin);
	converte(&n);

	return 0;
}
