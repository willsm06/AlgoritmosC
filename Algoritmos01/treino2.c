#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, ano;
	
	printf("Digite o Dia: ");
	scanf("%d", &dia);
	printf("Digite o Mês: ");
	scanf("%d", &mes);
	printf("Digite o Ano: ");
	scanf("%d", &ano);
	
	printf("%d/%d/%d", dia, mes, ano);
}
