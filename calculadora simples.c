#include <stdio.h>
#include <stdlib.h>

main(){
	float n1, n2;
	char op;
	printf ("Digite a expressao \n");
	scanf ( "%f", &n1);
	scanf ( "%c", &op);
	scanf ( "%f", &n2);
	
	if (op == '+' || op == '-' || op == '*' || op == '/'){
		
		if (op == '+'){
			printf ("O resultado e %.2f \n", n1+n2);
		}
		else {
			if (op == '-'){
				printf ("O resultado e %.2f \n", n1-n2);
			}
			else {
				if (op == '*'){
					printf ("O resultado e %.2f \n", n1*n2);
				}
				else{
					if (op == '/'){
						printf ("O resultado e %.2f \n", n1/n2);
					}
				}
			}
		}
	}
	
	
	else{
		printf ("Operacao Invalida \n");
	
	}
	system ("pause");
	
}
