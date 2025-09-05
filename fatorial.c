#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int num, i, fat=1;
	printf ("Digite um numero para descobrir o fatorial \n");
	scanf (" %d", &num);
	
	for (i=1; i <= num; i++)
	{
		fat*=i;
	}
	printf (" Fatorial de %d = %d \n", num, fat);
	
	system ("pause");
}
