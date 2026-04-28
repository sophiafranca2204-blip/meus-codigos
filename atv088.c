#include <stdio.h>
int main()
{
    float km, litros, cons;
    int continuar = 1;

    while(continuar == 1){
        printf("Km desde o ultimo abastecimento: ");
        scanf("%f", &km);

        printf("Litros q foram abastecidos: ");
        scanf("%f", &litros);

        cons = km / litros;

        printf("Consumo medio: %.2f km/L\n", cons);

        printf("Deseja continuar? (1 = sim, 0 = nao): ");
        scanf("%d", &continuar);
    }

    return 0;
}