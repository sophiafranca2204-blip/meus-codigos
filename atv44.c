#include <stdio.h> 
int main()
{
    int num1, num2;
    int soma = 0;

    while(soma <= 100){
        printf("Digite dois numeros: ");
        scanf("%d %d", &num1, &num2);

        soma = soma + num1 + num2;
    }

    printf("A soma ultrapassou 100, Soma total: %d\n", soma);

    return 0;
}