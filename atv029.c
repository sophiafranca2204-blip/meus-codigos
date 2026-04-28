#include <stdio.h>
int main()
{
    int i, contador = 0;
    
    for (i = 1; i <= 100; i++){
        if ((i % 3 == 0) || (i % 5 == 0)){
            contador++;
        }
    }

    printf("Quantidade de numeros: %d\n", contador);

    return 0;
}