#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float av1, av2, media;
	printf("Digite a primeira nota(0 a 10):");
	scanf("%f", &av1);
	printf("\nDigite a segunda nota(0 a 10):");
	scanf("%f", &av2);
	media= (av1 + av2)/2;
	
	if(media >= 6){
		printf("\n\nSua media foi: %.2f (Você foi aprovado!!)\n\n", media);
	}else{
		printf("\n\nSua média foi: %.2f (você foi reprovado!!)\n\n", media);
	}
	system("pause");
	system("cls");
}
