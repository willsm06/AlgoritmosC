#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, soma;
	soma= 0;
	printf("Digite o primeiro valor:");
	scanf("%d", &x);
	printf("\ndigite o segundo valor:");
	scanf("%d" , &y);
	soma = x + y;
	printf("\nA soma eh: %d \n\n", soma);
	system("pause");	
}


