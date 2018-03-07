#include <stdio.h>
#include <locale.h>

void soma (int* var1, int* var2){
	int s;
	s = *var1 + *var2;
	printf("A soma é: %d", s);
	return 0;
}

void resto (float* var1, float* var2){
	float s;
	s = *var1 / *var2;
	printf("O resto é: %.2f", s);
	return 0;
}

void multiplica (float* var1, float* var2){
	float s;
	s = *var1 * *var2;
	printf("A multiplicação é: %.2f", s);
	return 0;
}

int main(void){
	setlocale(LC_ALL,"");
	int v1, v2, opcao;
	printf("Insira numero 1 : ");
	scanf("%d", &v1);
	printf("Insira numero 2 : ");
	scanf("%d", &v2);
	printf("Escolha uma opção!\n");
	printf("1 -> Soma\n");
	printf("2 -> Resto\n");
	printf("3 -> Multiplicação\n");
	scanf("%d", &opcao);
	switch (opcao){
		case 1:
			soma(&v1, &v2);
		break;
		case 2:
			resto(&v1, &v2);
		break;
		case 3:
			multiplica(&v1, &v2);
		break;
	return 0;
	}
}
