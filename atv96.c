#include <stdio.h>
int main()
{
    float saldo = 0, valor;
    int op = -1;

    while(op != 0){
        printf("\nSaldo atual: %.2f\n", saldo);
        printf("1 - deposito\n");
        printf("2 - saque\n");
        printf("0 - parar\n");
        printf("Escolha: ");
        scanf("%d", &op);

        if(op == 1){
            printf("Valor do deposito: ");
            scanf("%f", &valor);
            saldo = saldo + valor;
        }
        else if(op == 2){
            printf("Valor do deposito: ");
            scanf("%f", &valor);
            saldo = saldo - valor;
        }
    }

    printf("\nSaldo final: %.2f\n", saldo);

    return 0;
}