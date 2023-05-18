#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float vel;
	printf("Sistema DETRAN\n\n");
	system("pause");
	system("cls");
	printf("Sistema DETRAN\n");
	printf("Digite a velocidade registrada:");
	scanf("%f", &vel);
	
	if(vel>50){
		printf("\nVeículo multado(Valor excedido)");
		vel =vel-50;
		printf("\n\nVocê passou no radar %.3f km/h a mais do que deveria.\n\n", vel);
	}else{
		printf("Veículo liberado!\n\n");
	}
	system("pause");
	system("cls");
}
