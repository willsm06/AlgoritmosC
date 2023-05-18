#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c;
	a = 75;
	printf("\nA = %d", a);
	b = 65;
	printf("\nB = %d", b);
	c=a;
	a=b;
	b=c;
	printf("\n\nTroca de valores efetuada");
	printf("\n\nA = %d e B = %d\n\n", a, b);
	system("pause");		
}
