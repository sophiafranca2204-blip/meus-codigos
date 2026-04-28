#include <stdio.h>
int main()
{
    int num, soma = 0;

    while (soma <= 500){
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma + num;
    }

    printf("A soma ultrapassou 500. Soma final: %d\n", soma);

    return 0;
}