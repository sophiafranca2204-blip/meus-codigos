#include <stdio.h>
int main()
{
    float venda;
    float total = 0;
    int days = 0;

    while(total < 5000){
        printf("Digite o valor vendido no dia: ");
        scanf("%f", &venda);

        if(venda < 0){
            printf("invalido!\n");
        }
        else{
            total = total + venda;
            days++;
        }
    }

    printf("\nPrecisou de %d dias para faturar 5000\n", days);

    return 0;
}