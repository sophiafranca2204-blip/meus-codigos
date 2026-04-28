#include <stdio.h>
int main()
{
    int days = 0;
    int h = 0;

    while(h < 100){
        h = h + 2;
        days++;
    }

    printf("a planta levou %d dias para chegar a 1 metro.\n", days);

    return 0;
}