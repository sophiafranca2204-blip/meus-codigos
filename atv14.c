#include <stdio.h>
int main()
{
    int num, i, contador, totalPrimos = 0;

    for (num = 1; num <= 100; num++){
        contador = 0;

        for (i = 1; i <= num; i++){
            if (num % i == 0){
                contador++;
            }
        }

        if (contador == 2){
            totalPrimos++;
        }
    }

    printf ("Existm %d numeros primos entre 1 e 100.\n", totalPrimos);

    return 0;
}