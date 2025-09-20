#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, x, tentativas=0;
    
    srand(time(NULL));
    x = rand() % 101;
    
    printf("*** Jogo da Adivinhacao *** \n");
    printf("Tente adivinhar o numero de 1 a 100 \n");
    
    do
    {
        printf("Digite o numero \n");
        scanf("%d", &num);
        tentativas++;
        
        if(num<x)
        printf("Mais alto! \n");
        else if(num>x)
        printf("Mais baixo! \n");
        else
        printf("Parabens, voce acertou em %d tentativas! \n", tentativas);
    }
    while(num!=x);
    
    return 0;
}