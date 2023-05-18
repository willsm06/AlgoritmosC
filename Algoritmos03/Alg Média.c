#include <stdio.h>
#include <stdlib.h>

int main(){
	float x, y, z, media;
	media = 0;
	printf("Digite o primeiro valor: ");
	scanf("%f", &x);
	printf("\nDigite o segundo valor: ");
	scanf("%f", &y);
	printf("\nDigite o terceiro valor: ");
	scanf("%f", &z);
	media = (x + y + z) / 3;
	printf("\nO resultado eh %.2f \n\n: ", media);
	system("pause");
	
}