#include <stdio.h>
int main()
{
    int num, cont = 0, n;
    int i = 0;

    printf("Quantos numeros?: ");
    scanf("%d", &n);

    while (i < n){
        printf("Digite um numero: ");
        scanf("%d", &num);

        if ((num % 7 == 0) && (num % 5 != 0)){
            cont++;
        }

        i++;
    }

    printf("Quantidade de numeros multiplos de 7 e nao de 5: %d\n", cont);

    return 0;
}