#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
    float pr, q, anos, res;
    printf("Digite o Pre�o do ma�o de cigarros: ");
    scanf("%f", &pr);
    printf("Digite quantos anos voce ja fumou: ");
    scanf("%f", &anos);
    printf("Digite a quantidade de ma�os fumados diariamente: ");
    scanf("%f", &q);
    anos =  (anos*365);
    res = (anos*q)*pr;
    printf("\nVoc� gastou R$%.2f\n\n", res);
    system("pause");
    system("cls");
}
    
    
