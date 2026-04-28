#include <stdio.h>
int main()
{
    float mensal;
    float total = 0;
    int meses = 0;

    printf("Quanto voce deseja juntar por mes? ");
    scanf("%f", &mensal);

    while(total < 30000){
        total = total + mensal;
        meses++;
    }

    printf("Voce vai levar %d meses para comprar o carro.\n", meses);

    return 0;
}