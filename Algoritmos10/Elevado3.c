#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float x, res;
	printf("Digite o valor que deseja elevar ao cubo: ");
	scanf("%f", &x);
	res = x*x*x;
	printf("O valor é:%.2f\n\n", res);
	system("pause");
	system("cls");
}
