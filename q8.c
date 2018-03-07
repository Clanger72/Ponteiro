#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef int ordenar[3];
typedef struct crescente{
	ordenar num;
}Crescente;

void cresc(Crescente *pont) {
	int i, j, aux;
	for(i=0; i<3; i++){
		for(j=i+1; j<3; j++){
			if(pont->num[i]>pont->num[j]){
				aux = pont->num[i];
				pont->num[i] = pont->num[j];
				pont->num[j] = aux;
			}
		}
	}
}


int main(void) {
	int i;
	Crescente pont;
	for(i=0; i<3; i++){
		printf("Insira um numero: ");
		scanf("%d", &pont.num[i]);
		fflush(stdin);
	}
	cresc(&pont);
		printf("Ordem crescente: ");
	for(i=0; i<3; i++){
		printf(" %d", pont.num[i]);
	}
	return 0;
}
