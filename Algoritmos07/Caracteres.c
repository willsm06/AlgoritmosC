#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	if(n<0){
		n = n*-1;
	}
	prinntf("%d", n);
	printf("Olá mundo\n\n");
	system("pause");
	system("cls");
}
