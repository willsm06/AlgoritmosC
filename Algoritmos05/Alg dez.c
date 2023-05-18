#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int dez;
	printf("Digite um valor: ");
	scanf("%d", &dez);
	
	if(dez > 10){
		printf("\n… maior que 10\n!");
	}else{
		printf("\n… menor que 10\n\n!");
	}
	system("pause");
	system("cls");
} 

