#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int v;
	printf("Digite um valor:");
	scanf("%d", &v);
	
	if(v<0){
		printf("\nO numero � negativo\n\n");
	}else{
		printf("\nO numero � positivo\n\n");	
	}
	system("pause");
	system("cls");
}
