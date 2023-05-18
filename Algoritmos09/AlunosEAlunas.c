#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m, f, total;
	printf("Digite o numero de Alunos: ");
	scanf("%d", &m);
	printf("Digite o numero de Alunas: ");
	scanf("%d", &f);
	system("pause");
	system("cls");
	printf("Alunos: %d\nAlunas: %d", m, f);
	total = m + f;
	printf("\n\nNumero total de alunos(as): %d", total);
}