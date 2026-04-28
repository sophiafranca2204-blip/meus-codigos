#include <stdio.h>
int main()
{
    int num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num > 0){
        soma = soma + num % 10;
        num = num / 10;
    }

    printf("Soma dos numeros: %d\n", soma);

    return 0;
}