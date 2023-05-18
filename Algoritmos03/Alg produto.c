#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, produto;
	produto= 0;
	printf("Digite o primeiro valor:");
	scanf("%d", &x);
	printf("\ndigite o segundo valor:");
	scanf("%d" , &y);
	produto = x * y;
	printf("\nA produto eh: %d \n\n", produto);
	system("pause");	
}
