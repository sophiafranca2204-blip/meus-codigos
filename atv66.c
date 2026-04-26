#include <stdio.h>
int main()
{
    int num, soma = 0, digito;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0){
        num = -num;
    }

    while(num != 0){
        digito = num % 10;

        if(digito % 2 == 0){
            soma = soma + digito;
        }

        num = num / 10;
    }

    printf("A soma dos digitos pares do numero e: %d\n", soma);

    return 0;
}