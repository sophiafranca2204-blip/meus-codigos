#include <stdio.h>
int main()
{
    float area = 100;
    float cobertura = 3;
    float coberto = 0;
    int litros = 0;

    while(coberto < area){
        coberto = coberto + cobertura;
        litros++;
    }

    printf("Litros necessarios: %d\n", litros);

    return 0;
}