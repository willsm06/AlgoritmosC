#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float km, lit, res;
	printf("Digite a quantidade de kilometros percoridos: ");
	scanf("%f", &km);
	printf("\nDigite a quantidade de litros usados: ");
	scanf("%f", &lit);
	res = km/lit;
	printf("\n\nO resultado é: %.2f\n\n", res);
	system("pause");
	system("cls");
}
