#include <stdio.h> 
int main()
{
    int num, soma = 0;

    while (soma <= 100){
        printf("Digite um numero: ");
        scanf("%d", &num);

        soma += num;
    }

    printf("Soma final: %d\n", soma);

    return 0;
}