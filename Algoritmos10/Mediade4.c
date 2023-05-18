#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float a, b, c, d, res;
	printf("Digite o primeiro valor: ");
	scanf("%f", &a);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &b);
	printf("\nDigite o terceiro valor: ");
	scanf("%f", &c);
	printf("\nDigite o quarto valor: ");
	scanf("%f", &d);
	res = (a+b+c+d)/4;
	printf("\n\nO resultado é: %.2f\n\n\n", res);
	system("pause");
	system("cls");
	
}
