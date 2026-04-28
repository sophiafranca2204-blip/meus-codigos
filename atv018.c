#include <stdio.h>
int main()
{
    int num, i;
    long long fatorial = 1;

    do {
        printf("Digite um numero inteiro nao negativo: ");
        scanf ("%d", &num);

        if ((num < 0) || (num > 20)) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while ((num < 0) || (num > 20));

    for (i = 1; i <= num; i++){
        fatorial *= i;
    }

    printf("O fatorial e: %lld\n", fatorial);

    return 0;
    
}