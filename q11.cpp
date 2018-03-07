#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>


typedef struct nome{
	char text[40];
}Nome;

void converte(Nome *n){
	int i, j;
	j = sizeof(n->text)/sizeof(n->text[0]);
	for(i=0; i<j;i++){
	n->text[i] = toupper(n->text[i]);	
	}
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
