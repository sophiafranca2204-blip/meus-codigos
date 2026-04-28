#include <stdio.h>
int main()
{
    float prod = 100;
    float ini = prod;
    int semanas = 0;

    while (prod < 2 * ini){
        prod = prod * 1.1;
        semanas++;
        printf("Semana %d: %.2f\n", semanas, prod);
    }

    printf("Total de semanas: %d\n", semanas);

    return 0;
}