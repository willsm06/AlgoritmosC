#include <stdio.h>
#include <stdlib.h>

int main(){
	float alt, larg, profun, vol;
	vol= 0;
	printf("Digite a altura: ");
	scanf("%f", &alt);
	printf("\nDigite a largura: ");
	scanf("%f", &larg);
	printf("\nDigite a profundidade: ");
	scanf("%f", &profun);
	vol = alt * larg * profun;
	printf("\nO volume eh: %2.f \n\n", vol);
	system("pause");
}
