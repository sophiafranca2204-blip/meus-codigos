#include <stdio.h>
int main()
{
    int i;
    int valor = 1;

    for (i = 0; i < 10; i++){
        printf ("%d\n", valor);
        valor = valor * 2;
    }

    return 0;
}