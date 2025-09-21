#include <stdio.h>

int main()
{
	int i, j, soma, m[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Digite um numero para a matriz \n");
			scanf("%d", &m[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			soma += m[i][j];
		}
	}
	printf("Soma = %d", soma);
}