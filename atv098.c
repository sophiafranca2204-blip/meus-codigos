#include <stdio.h> 
int main()
{
    float saldo = 100;
    float aposta;
    int rodada = 0;

    while(saldo > 0){
        printf("Seu saldo e de: %.2f\n", saldo);
        printf("Digite quanto quer apostar: ");
        scanf("%f", &aposta);

        if((aposta > saldo) || (aposta <= 0)){
            printf("aposta invalida!\n");
        }
        else{
            if(rodada % 2 == 0){
                saldo = saldo - aposta;
                printf("Voce perdeu seu idiota!hahahahaha\n");
            }
            else{
                saldo = saldo + aposta;
                printf("Parabens, meu delicioso. Voce ganhou!\n");
            }

            rodada++;
            
        }
    }


    printf("\n seu saldo acabou, boboca! Fim de jogo.\n");

    return 0;
}