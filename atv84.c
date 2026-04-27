#include <stdio.h>
int main()
{
    int bac = 1;
    int h = 0;

    while (bac < 1000000){
        bac = bac * 2;
        h++;
        printf("Hora %d: %d\n", h, bac );
    }

    printf("Total de horas: %d\n", h);

    return 0;
}