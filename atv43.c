#include <stdio.h> 
int main()
{
    int secreto = 9; 
    int chute;

    printf("Adivinhe o numero secreto(de 1 a 10):\n ");
    
    while (chute != secreto){
        printf("Digite seu chute: ");
        scanf("%d", &chute);

        if (chute > secreto ){
            printf("Muito alto! Digite um numero mais baixo:\n");
        }
        else if (chute < secreto){
            printf("Muito baixo! Digite um numero mais alto:\n");
        }
        else{
            printf("Parabens! Voce acertou!\n");
        }
    }

    return 0;
}