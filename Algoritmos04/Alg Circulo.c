#include <stdio.h>
#include <stdlib.h>

int main(){
	float r, area, comp, p;
	printf("Digite o valor do raio:");
	scanf("%f", &r);
	area = 3.14 * (r*r);
	comp = 2 * 3.14 * r;
	printf("O valor da area eh: %.2f", area);
	printf("\nO valor do comprimento eh: %.2f\n\n", comp);
	system("pause");
	
}
