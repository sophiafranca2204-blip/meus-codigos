#include <stdio.h>
int main()
{
    int i = 1;
    int valor;
    printf ("digite um numero: ");
    scanf("%d", &valor);

    printf("Divisores de %d:\n", valor);

    while (i <= valor){
        if (valor % i == 0){
            printf("%d\n", i);
        }
        i ++;
    }
}