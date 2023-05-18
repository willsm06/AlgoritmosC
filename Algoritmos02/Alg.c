#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n;
	printf("Digite um valor: ");
	scanf("%f", &n);
	
	if((n>=0) && (n<=10)){
		printf("Saída Válida");
	}
	else{
		printf("Saída Incorreta");
	}
}
