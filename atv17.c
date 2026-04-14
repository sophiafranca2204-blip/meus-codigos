#include <stdio.h>
int main()
{
    int i, soma = 0;

    for (i = 2; i <= 20; i += 2){
        soma += i;
    }

    printf ("A soma dos numeros pares de 1 a 20 e: %d\n", soma);

    return 0;
}