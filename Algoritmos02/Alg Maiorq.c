#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3;
	printf("Digite o valor 1: ");
	scanf("%f",&n1);
	printf("Digite o valor 2: ");
	scanf("%f",&n2);
	printf("Digite o valor 3: ");
	scanf("%f",&n3);

	if((n1>n2) &&(n1>n3)){
		printf("O maior valor é %.2f", n1);
	}
	else{
		if((n2>n1) &&(n2>n3)){
		printf("O maior valor é %.2f", n2);	
	}
	else{
		printf("O maior valor é %.2f", n3);
	}}
	system("pause");
	system("cls");
}

