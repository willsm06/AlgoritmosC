#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, soma, sub, mult, div, media;
	printf("Digite um n�mero: ");
	scanf("%d", &n1);
	printf("Digite outro n�mero: ");
	scanf("%d", &n2);
	soma= n1+n2;
	sub= n1-n2;
	mult= n1*n2;
	div= n1/n2;
	media= n1+n2/2;
	system("pause");
	system("cls");
	
	if(n1>0 && n2>0){
		printf("Soma:%d\nSubtra��o:%d\nMultiplica��o:%d\nDivis�o:%d\nMedia:%d"
		, soma, sub, mult, div, media);		
	}
	else{
		printf("O n�mero n�o pode ser menor ou igual a 0!!");
	}
}
