#include <stdio.h>

int main()
{
	int i, j, m[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			m[i][j] = (i*3)+1+j;
			printf("%3d", m[i][j]);
		}
		printf("\n");
	}