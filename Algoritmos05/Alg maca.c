#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 int main(){
	setlocale(LC_ALL, "Portuguese");
	float m;
	printf("Digite o numero de maçãs compradas:");
	scanf("%f", &m);
	
	if(m>=12){
		printf("O valor das maçãs ficou R$ %.2f\n\n", m);
	}else{
		m = m * 1.30;
		printf("O valor das maçãs ficou R$ %.2f\n\n", m);
	}
	system("pause");
	system("cls");
 	
 }
