#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
    float pr, q, anos, res;
    printf("Digite o Preço do maço de cigarros: ");
    scanf("%f", &pr);
    printf("Digite quantos anos voce ja fumou: ");
    scanf("%f", &anos);
    printf("Digite a quantidade de maços fumados diariamente: ");
    scanf("%f", &q);
    anos =  (anos*365);
    res = (anos*q)*pr;
    printf("\nVocê gastou R$%.2f\n\n", res);
    system("pause");
    system("cls");
}
    
    
