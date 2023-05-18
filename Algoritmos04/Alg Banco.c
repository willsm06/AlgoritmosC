#include<stdio.h>
#include<stdlib.h>

int main(){
	int notacem, resto, notacinq, notavint, notadez, notacinco, notadois;
	printf("Digite o valor (inteiro) que deseja sacar:");
	scanf("%d", &resto);
			notacem = resto / 100;
		printf("\nNotas de 100: %d", notacem);
			resto = resto - (notacem * 100);
			notacinq = resto / 50;
		printf("\nNotas de 50:  %d", notacinq);
			resto = resto - (notacinq * 50);
		notavint = resto / 20;
			printf("\nNotas de 20:  %d", notavint);
		resto = resto - (notavint * 20);
			notadez = resto / 10;
		printf("\nNotas de 10:  %d", notadez);
			resto = resto - (notadez * 10);
		notacinco = (resto -4) / 5;
			printf("\nNotas de 5:   %d", notacinco);
		resto = (resto+0.5) - (notacinco * 5);
			notadois = (resto+0.5) / 2 ;
		printf("\nNotas de 2:   %d\n\n", notadois);
	system("pause");
}