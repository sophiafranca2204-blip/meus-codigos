#include <stdio.h>
int main()
{
    int econom = 0;
    int porMes = 500;
    int meses = 0;

    while(econom < 5000){
        econom = econom + porMes;
        meses++;

        printf("Mes %d: R$ %.2f\n", meses, econom);
    }

    printf("Total de meses: %d\n", meses);

    return 0;
}