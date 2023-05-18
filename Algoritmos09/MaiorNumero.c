/*Escreva um programa que solicite dois números do tipo inteiro distintos ao usuário e que apresente na
tela o maior deles. Esse programa deve possuir uma função para verificar qual é o maior número.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	float x, y;
	printf("Digite um numero: ");
	scanf("%f", &x);
	printf("Digite outro numero: ");
	scanf("%f", &y);
	system("cls");
	
	if(x > y){
		printf("O maior numero e: %.2f", x);
	}
	else{
		printf("O maior numero e: %.2f", y);
	}
}