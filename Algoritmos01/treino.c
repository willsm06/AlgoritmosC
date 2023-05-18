#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1;
	printf("Escreva o valor da nota: ");
	scanf("%d", &n1);
	
	if(n1 < 3){
		printf("Sua media e E");
	}
	else if(n1 >= 3 && n1 <= 5){
		printf("Sua media e D");
	}
	else if(n1> 5 && n1<=7){
		printf("Sua media e C");
	}
	else if(n1 >7 && n1 <= 9){
		printf("Sua media e B");		
	}
	else if(n1==10){
		printf("Sua media e A");
	}
	else{
		printf("Este valor nao existe.");
	}
}
