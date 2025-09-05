#include <stdio.h>
#include <stdio.h>

main()
{
	   float n1, n2, p1, p2, media;
	   char nome[50];
	   p1 = 5;
	   p2 = 5;
	   	   
	   printf ("Digite seu nome \n");
	   scanf ("%s", &nome);
	   
	   printf ("Digite a nota 1 \n");
	   scanf ("%f", &n1);
	   
	   printf ("Digite a nota 2 \n");
	   scanf ("%f", &n2);
	   
	   media = (n1*p1 + n2*p2)/(p1+p2);
	   
	   printf ("A media de %s e = %f \n\n", nome, media);
	   
	   if (media>5)
	   {
	   	printf ("Parabens %s, voce esta aprovado \n\n", nome);
	   }
	   else
	   {
	   	printf ("Voce esta reprovado \n\n");
	   }
	   system ("pause");
}
