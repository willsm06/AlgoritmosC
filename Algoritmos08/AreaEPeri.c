#include<stdio.h>
#include<stdlib.h>

int main(){
	int lado, area, peri;
	printf("Digite o lado do quadrado: ");
	scanf("%d", &lado);
	printf("\nArea: %d\nPerimetro: %d\n\n", (area= lado*lado), (peri= lado*4));
	system("pause");
	system("cls");
}
