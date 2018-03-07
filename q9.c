#include <stdio.h>
#include <stdlib.h>

typedef char texto[50][50];

int main() {
	texto txt;
	int linha, coluna;
	printf("Insira a linha que deseja: \n");
	scanf("%d", &linha);
	fflush(stdin);
	printf("Agora a coluna: \n");
	scanf("%d", &coluna);
	fflush(stdin);
	printf("Digite a frase:\n ");
	gets(txt[int linha][int coluna]);
	fflush(stdin);
	printf("%s", txt[linha][coluna]);
}
