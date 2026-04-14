#include <stdio.h>
int main()
{
    int i, soma = 0;
    for (i = 1; i <= 100; i++){
        soma += i;
    }

    printf("A soma de 1 a 100 e: %d\n", soma);

    return 0;
}