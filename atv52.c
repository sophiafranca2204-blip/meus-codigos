#include <stdio.h>
int main()
{
    float saldo = 0, deposito;
    int meses = 0;

    printf("Digite o valor do deposito mensal: ");
    scanf("%f", &deposito);

    while(saldo < 10000){
        saldo = saldo + deposito;
        meses++;

        printf("Mes %d: %.2f\n", meses, saldo);
    }

    printf("\n Voce antingiu 10000 em %d meses!\n", meses);

    return 0;
}