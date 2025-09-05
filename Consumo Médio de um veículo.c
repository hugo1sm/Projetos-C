#include <stdio.h>
#include <stdlib.h>

main(){
	float dist, comb;
	
	printf ("Digite a distancia percorrida em quilometros \n");
	scanf ( "%f", &dist);
	
	printf ("Digite o total de combustivel gasto em litros \n");
	scanf ( "%f", &comb);
	
	
	printf ("O consumo medio do seu automovel e de %.2f litros por km \n", comb/dist);
	
	system ("pause");
}
