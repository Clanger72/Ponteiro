#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct media{
	float valor[10];
	int cont;
}Media;

void numero(Media *m){
	float n,c,r;
	int b;
	n = m->cont;
	for (b=0;b < m->cont;b++){
		c += m->valor[b];
	}
	r = c/n;
	printf ("Resultado da m�dia %.2f",r);
}
int main() 
{
	setlocale(LC_ALL,"");
	int a;
	Media m;
	printf ("Digite quantos n�meros deseja fazer a m�dia: ");
	scanf("%d",&m.cont);
	for (a=0;a<m.cont;a++)
	{
		if (a==0)
		{
			printf ("digite o primeiro n�mero: ");
			scanf("%f",&m.valor[a]);
		}
		else
		{
		printf ("Digite o n�mero %d�",a+1);
		scanf("%f",&m.valor[a]);
		}
	}
	numero(&m);		
}
