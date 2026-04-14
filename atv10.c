#include <stdio.h>
int main()
{
    int i = 1;
    int valor;
    printf ("digite um numero: ");
    scanf("%d", &valor);

    while (i <= valor){
        printf ("%d\n", i);
        i ++;
    }
}