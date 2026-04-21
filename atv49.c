#include <stdio.h>
int main()
{
    int secretnum = 7;
    int tentativa;
    int i;
    int acertou = 0;

    for(i = 1; i <= 3 && acertou == 0; i++){
        printf("Tentativa %d de 3\n", i);
        printf("Digite um numero: ");
        scanf("%d", &tentativa);

        if (tentativa == secretnum){
            printf("Parabens, voce advinhou o numero secreto!");
            acertou = 1;
        }
        else{
            if (tentativa < secretnum){
                printf("O numero secreto e MAIOR.\n");
            }
            else{
                printf("O numero secreto e MENOR.\n");
            }
        }
    }

    if (acertou == 0){
        printf("Voce PERDEU. O numero secreto era %d\n", secretnum);
    }

    return 0;
}