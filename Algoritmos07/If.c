#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	printf("CONVERSOR DE NUMEROS NEGATIVOS\n\n");
	system("pause");
	system("cls");
	printf("CONVERSOR DE NUMEROS NEGATIVOS");
	printf("\n\nDigite um valor: ");
	scanf("%d", &n);
	
	if(n<0){
		n = n*-1;
		printf("Valor positivo: %d\n\n", n);
	}else{
	printf("\n\n%d já é positivo!\n\n", n);
	system("pause");
	system("cls");
	}
}
