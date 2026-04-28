#include <stdio.h>
int main()
{
    int h = 0;
    int km = 0;

    while(km < 600){
        km = km + 50;
        h++;
        printf("Hora %d: %d\n", h, km);
    }

    printf("Total de horas para chegar em 600 km: %d\n", h);

    return 0;
}