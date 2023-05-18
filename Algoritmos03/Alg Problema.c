#include <stdio.h>
#include <stdlib.h>

int main(){
	float vel, temp, dist, litusa;
	printf("Digite o tempo gasto durante a viagem (em horas): ");
	scanf("%f", &temp);
	printf("Digite a velocidade media durante a viagem (em kilometros): ");
	scanf("%f", &vel);
	dist = temp * vel;
	printf("\n\nDistancia percorrida: %.2f", dist);
	litusa = dist / 12;
	printf("km \n\nTempo: %.2f", temp);;
	printf("h \n\nVelocidade Media: %.2f", vel);
	printf("km/h \n\nLitros usados: %.2f", litusa);
	printf("L\n\n");
	system("pause");
}
	
