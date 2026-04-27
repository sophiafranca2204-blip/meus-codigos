#include <stdio.h>
int main()
{
    int dist = 0;
    int abastecimentos = 0;
    int autonomia = 400;

    while(dist < 2000){
        dist = dist + autonomia;
        abastecimentos++;

        printf("Abastecimento %d: %d km\n", abastecimentos, dist);
    }

    printf("Total: %d\n", abastecimentos);

    return 0;
}