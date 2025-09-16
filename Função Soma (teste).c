#include <stdio.h>

int soma(int a, int b)
{
	return a+b;
}

int main()
{
	int x, y, res;
	
	printf("Digite um numero \n");
	scanf("%d", &x);
	printf("Digite outro numero \n");
	scanf("%d", &y);
	
	res = soma(x, y);
	
	printf("Soma = %d \n", res);
}
